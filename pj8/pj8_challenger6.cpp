#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Structure to store month and rainfall data
struct MonthData {
    string month;
    double rainfall;
};

// Function to compare MonthData structures based on rainfall
bool compareRainfall(const MonthData& a, const MonthData& b) {
    return a.rainfall > b.rainfall;
}

int main() {
    const int NUM_MONTHS = 12;
    MonthData months[NUM_MONTHS];

    // Input the data
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "Enter the rainfall for month " << i + 1 << ": ";
        cin >> months[i].rainfall;
        months[i].month = to_string(i + 1);
    }

    // Sort the array of MonthData structures based on rainfall
    sort(months, months + NUM_MONTHS, compareRainfall);

    // Display the sorted list of months in order of rainfall
    cout << "Months sorted by rainfall (highest to lowest):\n";
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "Month " << months[i].month << ": " << months[i].rainfall << " inches" << endl;
    }

    return 0;
}
