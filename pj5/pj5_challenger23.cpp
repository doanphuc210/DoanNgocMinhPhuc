#include <iostream>
using namespace std;

int main() {
    int size = 10;  // You can adjust the size to change the number of lines in the pattern.

    // Pattern A
    cout << "Pattern A" << endl;
    for (int row = 1; row <= size; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "+";
        }
        for (int spaces = size - row; spaces >= 1; spaces--) {
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Pattern B
    cout << "Pattern B" << endl;
    for (int row = 1; row <= size; row++) {
        for (int spaces = row - 1; spaces >= 1; spaces--) {
            cout << " ";
        }
        for (int col = size - row + 1; col >= 1; col--) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
