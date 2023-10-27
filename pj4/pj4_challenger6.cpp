#include <iostream>
using namespace std;

int main() {
    double mass, weight;

    // Input for the mass in kilograms
    cout << "Enter the mass of the object in kilograms: ";
    cin >> mass;

    // Calculate the weight in newtons using the formula
    weight = mass * 9.8;

    // Display the calculated weight
    cout << "The weight of the object is " << weight << " newtons." << endl;

    // Check and display if the object is too heavy or too light
    if (weight > 1000) {
        cout << "The object is too heavy." << endl;
    } else if (weight < 10) {
        cout << "The object is too light." << endl;
    }

    return 0;
}
