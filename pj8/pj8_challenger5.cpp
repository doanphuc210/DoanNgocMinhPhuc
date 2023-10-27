#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int NUM_ACCOUNT_NUMBERS = 18;

array<int, NUM_ACCOUNT_NUMBERS> account_numbers = {
    5658845,
    4520125,
    7895122,
    8777541,
    8451277,
    1302850,
    8080152,
    4562555,
    5552012,
    5050552,
    7825877,
    1250255,
    1005231,
    654231,
    3852085,
    7576651,
    7881200,
    4581002,
};

void selection_sort(array<int, NUM_ACCOUNT_NUMBERS>& account_numbers) {
  for (int i = 0; i < NUM_ACCOUNT_NUMBERS - 1; i++) {
    int smallest_index = i;

    for (int j = i + 1; j < NUM_ACCOUNT_NUMBERS; j++) {
      if (account_numbers[j] < account_numbers[smallest_index]) {
        smallest_index = j;
      }
    }

    swap(account_numbers[i], account_numbers[smallest_index]);
  }
}

int binary_search(array<int, NUM_ACCOUNT_NUMBERS>& account_numbers, int account_number) {
  int low = 0;
  int high = NUM_ACCOUNT_NUMBERS - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (account_numbers[mid] == account_number) {
      return mid;
    } else if (account_numbers[mid] < account_number) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int account_number;

  cout << "Enter a charge account number: ";
  cin >> account_number;

  selection_sort(account_numbers);

  int index = binary_search(account_numbers, account_number);

  if (index != -1) {
    cout << "The account number is valid." << endl;
  } else {
    cout << "The account number is invalid." << endl;
  }

  return 0;
}
