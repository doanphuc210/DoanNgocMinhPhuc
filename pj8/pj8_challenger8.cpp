#include <iostream>
#include <string>

using namespace std;

// Function prototype
int binarySearch(const string[], int, string);

int main() {
    const int SIZE = 5;
    string names[SIZE] = {"Alice", "Bob", "Carol", "David", "Eve"};

    // Ensure the array of names is sorted before performing binary search
    sort(names, names + SIZE);

    cout << "Sorted list of names:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    string targetName;
    cout << "Enter a name to search for: ";
    cin >> targetName;

    int result = binarySearch(names, SIZE, targetName);

    if (result == -1) {
        cout << "Name not found in the list." << endl;
    } else {
        cout << "Name found at index " << result << "." << endl;
    }

    return 0;
}

// Function to perform binary search on an array of strings
int binarySearch(const string array[], int size, string target) {
    int first = 0;
    int last = size - 1;
    
    while (first <= last) {
        int middle = (first + last) / 2;
        if (array[middle] == target) {
            return middle; // Element found
        } else if (array[middle] < target) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    
    return -1; // Element not found
}
