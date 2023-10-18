#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double quotient, number1 = 132.364, number2 = 26.91;

    quotient = number1 / number2;

    // Display the original quotient
    cout << quotient << endl;

    // Use setprecision to round the quotient to different decimal places
    cout << setprecision(5) << quotient << endl;
    cout << setprecision(4) << quotient << endl;
    cout << setprecision(3) << quotient << endl;
    cout << setprecision(2) << quotient << endl;
    cout << setprecision(1) << quotient << endl;

    return 0;
}
