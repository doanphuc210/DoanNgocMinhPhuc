#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile("SavingsAccountReport.txt");

    if (!outputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    double balance, annualInterestRate, monthlyDeposit;
    int numMonths;

    cout << "Enter the starting balance: $";
    cin >> balance;

    cout << "Enter the annual interest rate (in decimal form): ";
    cin >> annualInterestRate;

    cout << "Enter the monthly deposit amount: $";
    cin >> monthlyDeposit;

    cout << "Enter the number of months: ";
    cin >> numMonths;

    outputFile << "Month\tStarting Balance\tInterest\tMonthly Deposit\tEnding Balance\n";

    for (int month = 1; month <= numMonths; month++) {
        double interest = (balance + monthlyDeposit) * (annualInterestRate / 12);
        balance = balance + monthlyDeposit + interest;
        outputFile << month << "\t" << balance - monthlyDeposit - interest << "\t" << interest << "\t" << monthlyDeposit << "\t" << balance << "\n";
    }

    cout << "Report has been saved to SavingsAccountReport.txt." << endl;
    outputFile.close();

    return 0;
}
