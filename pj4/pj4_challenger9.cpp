#include <iostream>
using namespace std;

int main() {
    int pennies, nickels, dimes, quarters;

    cout << "Change Counting Game\n";
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    double total = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25;

    if (total == 1.0) {
        cout << "Congratulations! You won the game. You have exactly one dollar!\n";
    } else if (total > 1.0) {
        cout << "Sorry, the total amount is more than one dollar.\n";
    } else {
        cout << "Sorry, the total amount is less than one dollar.\n";
    }

    return 0;
}
