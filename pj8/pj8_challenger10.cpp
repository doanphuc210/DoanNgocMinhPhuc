#include <iostream>

using namespace std;

// Function prototypes
void bubbleSort(int[], int);
void selectionSort(int[], int);

// Function to display the contents of an array
void displayArray(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 8;
    int array1[SIZE] = {12, 4, 7, 1, 9, 3, 10, 6};
    int array2[SIZE] = {12, 4, 7, 1, 9, 3, 10, 6};

    // Display the contents of the first array
    cout << "Array 1 (Before Bubble Sort): ";
    displayArray(array1, SIZE);

    // Sort the first array using a modified bubble sort and print after each pass
    bubbleSort(array1, SIZE);

    // Display the contents of the second array
    cout << "Array 2 (Before Selection Sort): ";
    displayArray(array2, SIZE);

    // Sort the second array using a modified selection sort and print after each pass
    selectionSort(array2, SIZE);

    return 0;
}

// Bubble sort function with printing after each pass
void bubbleSort(int array[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        bool swapped = false;
        for (int i = 0; i < size - 1 - pass; i++) {
            if (array[i] > array[i + 1]) {
                // Swap the elements
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
        cout << "After Pass " << pass + 1 << ": ";
        displayArray(array, size);
        if (!swapped) {
            break; // No more swaps needed, the array is already sorted
        }
    }
}

// Selection sort function with printing after each pass
void selectionSort(int array[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        int minIndex = pass;
        for (int i = pass + 1; i < size; i++) {
            if (array[i] < array[minIndex]) {
                minIndex = i;
            }
        }
        if (minIndex != pass) {
            // Swap the elements
            int temp = array[pass];
            array[pass] = array[minIndex];
            array[minIndex] = temp;
        }
        cout << "After Pass " << pass + 1 << ": ";
        displayArray(array, size);
    }
}
