#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;

    cout << "Enter the first primary color (red, blue, or yellow): ";
    cin >> color1;

    cout << "Enter the second primary color (red, blue, or yellow): ";
    cin >> color2;

    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
        cout << "Mixing red and blue produces purple.\n";
    } else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
        cout << "Mixing red and yellow produces orange.\n";
    } else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
        cout << "Mixing blue and yellow produces green.\n";
    } else {
        cout << "Error: Please enter valid primary colors (red, blue, or yellow).\n";
    }

    return 0;
}
