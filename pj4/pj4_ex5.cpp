#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int score1, score2, score3; // To hold three test scores
    double average; // To hold the average score

    // Get the three test scores.
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;

    // Calculate and display the average score.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average << endl;

    // Check if the average is 100 (a perfect score).
    if (average == 100) // Use the equality operator (==) here
    {
        cout << "Congratulations! That's a perfect score!" << endl;
    }

    return 0;
}
