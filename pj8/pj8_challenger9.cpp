#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
int linearSearch(const int[], int, int, int&);
int binarySearch(const int[], int, int, int&);

int main() {
    const int SIZE = 20;
    int numbers[SIZE];

    // Seed the random number generator
    srand(time(0));

    // Initialize the array with random numbers
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100; // Generate random numbers between 0 and 99
    }

    // Sort the array for binary search
    sort(numbers, numbers + SIZE);

    int target;
    cout << "Enter a value to search for: ";
    cin >> target;

    int linearComparisons = 0;
    int binaryComparisons = 0;

    // Linear search and count comparisons
    int linearResult = linearSearch(numbers, SIZE, target, linearComparisons);

    // Binary search and count comparisons
    int binaryResult = binarySearch(numbers, SIZE, target, binaryComparisons);

    if (linearResult != -1) {
        cout << "Linear Search: Value found at index " << linearResult << ", Comparisons: " << linearComparisons << endl;
    } else {
        cout << "Linear Search: Value not found, Comparisons: " << linearComparisons << endl;
    }

    if (binaryResult != -1) {
        cout << "Binary Search: Value found at index " << binaryResult << ", Comparisons: " << binaryComparisons << endl;
    } else {
        cout << "Binary Search: Value not found, Comparisons: " << binaryComparisons << endl;
    }

    return 0;
}

// Linear search function
int linearSearch(const int array[], int size, int target, int& comparisons) {
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (array[i] == target) {
            return i; // Value found at index i
        }
    }
    return -1; // Value not found
}

// Binary search function
int binarySearch(const int array[], int size, int target, int& comparisons) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        comparisons++;

        if (array[middle] == target) {
            return middle; // Value found at index middle
        } else if (array[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1; // Value not found
}
