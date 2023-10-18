#include <iostream>
using namespace std;

int main() {
    int length, width, area;

    cout << "This program calculates the area of a rectangle.\n";
    cout << "Enter the length and width of the rectangle separated by a space.\n";
    cin >> length >> width;  // Input both length and width separated by a space
    area = length * width;   // Calculate the area
    cout << "The area of the rectangle is " << area << endl;  // Display the result

    return 0;
}
