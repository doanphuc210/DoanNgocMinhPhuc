#include <iostream>
#include <string>

using namespace std;

// Function prototype
void selectionSort(string[], int);

int main() {
    const int SIZE = 5;
    string names[SIZE] = {"Alice", "Bob", "Eve", "David", "Carol"};

    cout << "Original list of names:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Call the selectionSort function to sort the array of names
    selectionSort(names, SIZE);

    cout << "Sorted list of names:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to perform selection sort on an array of strings
void selectionSort(string array[], int size) {
    for (int startIndex = 0; startIndex < size - 1; startIndex++) {
        int minIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; currentIndex++) {
            if (array[currentIndex] < array[minIndex]) {
                minIndex = currentIndex;
            }
        }
        // Swap the elements
        string temp = array[startIndex];
        array[startIndex] = array[minIndex];
        array[minIndex] = temp;
    }
}
