#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // Open the file
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string name;
    int count = 0;

    cout << "Student Line Up:\n";

    while (getline(inputFile, name)) {
        count++;
        cout << "Student #" << count << ": " << name << endl;
    }

    inputFile.close();

    if (count == 0) {
        cout << "No data found in the file." << endl;
    } else {
        cout << "Total students in line: " << count << endl;
    }

    return 0;
}
