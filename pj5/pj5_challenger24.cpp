#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt"); // Open the file
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int number;
    int count = 0;
    int sum = 0;

    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close();

    if (count > 0) {
        double average = static_cast<double>(sum) / count;

        cout << "Number of numbers in the file: " << count << endl;
        cout << "Sum of all numbers in the file: " << sum << endl;
        cout << "Average of all numbers in the file: " << average << endl;
    } else {
        cout << "The file is empty." << endl;
    }

    return 0;
}
