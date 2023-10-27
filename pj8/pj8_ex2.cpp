#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 20;

int binarySearch(const int[], int, int);

int main() {
  // Array with employee IDs sorted in ascending order.
  int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                       234, 289, 296, 310, 319, 388, 394,
                       417, 429, 447, 521, 536, 600};

  // Get an employee ID to search for.
  int empID;
  cout << "Enter the employee ID you wish to search for: ";
  cin >> empID;

  // Search for the ID using the standard library `binary_search()` algorithm.
  auto result = std::binary_search(idNums, idNums + SIZE, empID);

  // If the ID was not found, print an error message.
  if (!result) {
    cout << "That number does not exist in the array. \n";
  } else {
    // Otherwise, print the index of the ID in the array.
    cout << "That ID is found at element " << std::distance(idNums, result) << " in the array.\n";
  }

  return 0;
}

int binarySearch(const int array[], int size, int value) {
  // Perform a binary search on the array.
  int first = 0, last = size - 1, middle;
  bool found = false;

  while (!found && first <= last) {
    middle = (first + last) / 2;
    if (array[middle] == value) {
      found = true;
    } else if (array[middle] > value) {
      last = middle - 1;
    } else {
      first = middle + 1;
    }
  }

  // Return the index of the value if it was found, or -1 otherwise.
  return found ? middle : -1;
}
