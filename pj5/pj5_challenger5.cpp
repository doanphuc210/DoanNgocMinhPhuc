#include <iostream>

using namespace std;

int main() {
  // Declare variables
  float current_rate = 2500;

  // Display the current rate
  cout << "The current membership fee is $" << current_rate << endl;

  // Iterate over the next six years
  for (int year = 1; year <= 6; year++) {
    // Calculate the new membership rate
    current_rate += current_rate * 0.04;

    // Display the new rate
    cout << "Year " << year << ": $" << current_rate << endl;
  }

  return 0;
}
