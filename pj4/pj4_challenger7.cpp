#include <iostream>
using namespace std;

int main() {
    long seconds;

    // Input for the number of seconds
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    if (seconds >= 60) {
        int minutes = seconds / 60;
        cout << "Minutes: " << minutes << endl;

        if (seconds >= 3600) {
            int hours = seconds / 3600;
            cout << "Hours: " << hours << endl;

            if (seconds >= 86400) {
                int days = seconds / 86400;
                cout << "Days: " << days << endl;
            }
        }
    }

    return 0;
}
