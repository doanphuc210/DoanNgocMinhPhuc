#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform binary search on an array of strings
int binarySearch(const vector<string>& array, const string& target) {
    int left = 0;
    int right = array.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

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

int main() {
    ifstream inputFile("names.txt");
    if (!inputFile) {
        cerr << "Error opening file 'names.txt'. Make sure the file exists." << endl;
        return 1;
    }

    vector<string> names;
    string name;

    // Read 20 strings from the file
    for (int i = 0; i < 20; i++) {
        if (inputFile >> name) {
            names.push_back(name);
        } else {
            cerr << "Error reading from file 'names.txt'. Not enough data in the file." << endl;
            return 1;
        }
    }

    // Sort the array of names for binary search
    sort(names.begin(), names.end());

    string targetName;
    cout << "Enter a name to search for: ";
    cin >> targetName;

    int result = binarySearch(names, targetName);

    if (result != -1) {
        cout << "Name found at index " << result << "." << endl;
    } else {
        cout << "Name not found in the list." << endl;
    }

    inputFile.close();
    return 0;
}
