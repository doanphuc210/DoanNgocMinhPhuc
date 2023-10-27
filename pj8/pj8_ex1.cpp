#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 5;

int searchList(const int[], int, int);

int main() {
  int tests[SIZE] = {87, 75, 98, 100, 82};

  // Search the array for 100 using the standard library `find()` algorithm.
  auto result = std::find(tests, tests + SIZE, 100);

  // If `find()` returned `tests + SIZE`, then 100 was not found.
  if (result == tests + SIZE) {
    cout << "You did not earn 100 points on any test\n";
  } else {
    // Otherwise, `result` points to the first 100 found in the array.
    cout << "You earned 100 points on test ";
    cout << (result - tests + 1) << endl;
  }

  return 0;
}

int searchList(const int list[], int numElems, int value) {
  // Perform a linear search on the array.
  for (int i = 0; i < numElems; i++) {
    if (list[i] == value) {
      return i; // Return the subscript of the value.
    }
  }

  // If the value was not found, return -1.
  return -1;
}
