#include <iostream>
#include <array>

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

bool is_valid_account_number(int account_number) {
  for (int i = 0; i < NUM_ACCOUNT_NUMBERS; i++) {
    if (account_number == account_numbers[i]) {
      return true;
    }
  }

  return false;
}

int main() {
  int account_number;

  cout << "Enter a charge account number: ";
  cin >> account_number;

  if (is_valid_account_number(account_number)) {
    cout << "The account number is valid." << endl;
  } else {
    cout << "The account number is invalid." << endl;
  }

  return 0;
}
