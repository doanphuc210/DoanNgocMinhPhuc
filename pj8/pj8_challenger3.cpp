#include <iostream>
#include <vector>

using namespace std;

vector<int> lucky_numbers = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

bool is_winning_number(int winning_number) {
  for (int i = 0; i < lucky_numbers.size(); i++) {
    if (winning_number == lucky_numbers[i]) {
      return true;
    }
  }

  return false;
}

int main() {
  int winning_number;

  cout << "Enter the winning lottery number: ";
  cin >> winning_number;

  if (is_winning_number(winning_number)) {
    cout << "Congratulations! You won the lottery!" << endl;
  } else {
    cout << "Sorry, you didn't win the lottery this week." << endl;
  }

  return 0;
}
