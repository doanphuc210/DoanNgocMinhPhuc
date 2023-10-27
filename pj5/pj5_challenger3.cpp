#include <iostream>
using namespace std;

int main() {
    const double annualRise = 1.5;  // 1.5 millimeters per year
    int years = 25;

    cout << "Year\tMillimeters Risen" << endl;
    cout << "-----------------------" << endl;

    for (int year = 1; year <= years; year++) {
        double millimetersRisen = annualRise * year;
        cout << year << "\t" << millimetersRisen << endl;
    }

    return 0;
}
