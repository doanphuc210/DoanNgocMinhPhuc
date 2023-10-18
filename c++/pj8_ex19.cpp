#include <iostream>
using namespace std;

int main() {
    int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *nums = set; // Make nums point to set

    // Display the numbers in the array.
    cout << "The numbers in set are:\n";
    cout << *nums << " "; // Display the first element

    // Use a while loop to advance nums and display the rest of the elements.
    while (nums < &set[7]) {
        // Advance nums to point to the next element.
        nums++;
        // Display the value pointed to by nums.
        cout << *nums << " ";
    }

    // Reset nums to point to the last element.
    nums = &set[7];

    // Display the numbers in reverse order.
    cout << "\nThe numbers in set backward are:\n";
    cout << *nums << " "; // Display the last element

    // Use a while loop to move backward and display the rest of the elements.
    while (nums > set) {
        // Move backward to the previous element.
        nums--;
        // Display the value pointed to by nums.
        cout << *nums << " ";
    }

    return 0;
}
