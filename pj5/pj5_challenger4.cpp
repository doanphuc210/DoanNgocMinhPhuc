#include <iostream>
using namespace std;

int main() {
    const double caloriesPerMinute = 3.6;
    int minutes;

    cout << "Minutes\tCalories Burned" << endl;
    cout << "------------------------" << endl;

    for (minutes = 5; minutes <= 30; minutes += 5) {
        double caloriesBurned = caloriesPerMinute * minutes;
        cout << minutes << "\t" << caloriesBurned << endl;
    }

    return 0;
}
