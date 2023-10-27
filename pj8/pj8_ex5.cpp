#include <iostream>
#include <algorithm>

using namespace std;

// Function prototypes
void selectionSort(int[], int);
void showArray(const int[], int);

int main() {
  // Define an array with unsorted values
  const int SIZE = 6;
  int values[SIZE] = {5, 7, 2, 8, 9, 1};

  // Display the values.
  cout << "The unsorted values are\n";
  showArray(values, SIZE);

  // Sort the values.
  selectionSort(values, SIZE);

  // Display the values again.
  cout << "The sorted values are\n";
  showArray(values, SIZE);

  return 0;
}

// **************************************************************
// Definition of function selectionSort.
// This function performs an ascending-order selection sort on
// array. size is the number of elements in the array.
// **************************************************************

void selectionSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[minIndex]) {
        minIndex = j;
      }
    }

    std::swap(array[i], array[minIndex]);
  }
}

// **************************************************************
// Definition of function showArray.
// This function displays the contents of array. size is the
// number of elements.
// **************************************************************

void showArray(const int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
