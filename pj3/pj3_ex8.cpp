#include <iostream>
using namespace std;

int main() {
    float test;

    // Attempt to overflow the float by multiplying a large value
    test = 2.0e38 * 1000;
    cout << test << endl;

    // Attempt to underflow the float by dividing a small value
    test = 2.0e-38 / 2.0e38;
    cout << test << endl;

    return 0;
}
