#include <iostream>
#include <vector>

using namespace std;

vector<int> lucky_numbers = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

int binary_search(vector<int>& lucky_numbers, int winning_number) {
  int low = 0;
  int high = lucky_numbers.size() - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (lucky_numbers[mid] == winning_number) {
      return mid;
    } else if (lucky_numbers[mid] < winning_number) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int winning_number;

  cout << "Enter the winning lottery number: ";
  cin >> winning_number;

  int index = binary_search(lucky_numbers, winning_number);

  if (index != -1) {
    cout << "Congratulations! You won the lottery!" << endl;
  } else {
    cout << "Sorry, you didn't win the lottery this week." << endl;
  }

  return 0;
}
