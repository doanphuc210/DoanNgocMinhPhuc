#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    // Input for weight in pounds
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    // Input for height in inches
    cout << "Enter your height in inches: ";
    cin >> height;

    // Calculate BMI using the formula
    bmi = (weight * 703) / (height * height);

    // Display the calculated BMI
    cout << "Your Body Mass Index (BMI) is: " << bmi << endl;

    // Interpret the BMI
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a normal weight." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    return 0;
}
