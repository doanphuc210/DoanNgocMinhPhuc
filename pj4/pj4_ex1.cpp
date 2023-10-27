#include <iostream>
using namespace std;

int main()
{
    bool trueValue, falseValue;
    int x = 5, y = 10;

    trueValue = x < y;    // trueValue is assigned the result of x < y (true or false).
    falseValue = y == x;  // falseValue is assigned the result of y == x (true or false).

    cout << "True is " << trueValue << endl;   // Display the value of trueValue.
    cout << "False is " << falseValue << endl; // Display the value of falseValue.

    return 0;
}
