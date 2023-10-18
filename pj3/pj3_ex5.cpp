#include <iostream>
#include <cmath> // Needed for pow function
using namespace std;

int main() {
    const double PI = 3.14159;
    double area, radius;

    cout << "This program calculates the area of a circle.\n";
    cout << "What is the radius of the circle? ";
    cin >> radius;  // Input the radius
    area = PI * pow(radius, 2.0);  // Calculate the area using the formula
    cout << "The area is " << area << endl;  // Display the calculated area

    return 0;
}
