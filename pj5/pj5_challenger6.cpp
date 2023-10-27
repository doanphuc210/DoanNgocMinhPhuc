#include <iostream>

using namespace std;

int main() {
  // Declare variables
  float speed, distance_traveled, total_distance_traveled = 0;
  int time_traveled;

  // Prompt the user for the speed and time traveled
  cout << "What is the speed of the vehicle in mph? ";
  cin >> speed;
  cout << "How many hours has it traveled? ";
  cin >> time_traveled;

  // Validate the user input
  if (speed < 0 || time_traveled < 1) {
    cout << "Invalid input." << endl;
    return 1;
  }

  // Calculate the total distance traveled
  total_distance_traveled = speed * time_traveled;

  // Display the distance traveled for each hour
  cout << "Hour Distance Traveled" << endl;
  cout << "--------------------------------" << endl;
  for (int hour = 1; hour <= time_traveled; hour++) {
    distance_traveled = speed * hour;
    cout << hour << " " << distance_traveled << endl;
  }

  // Display the total distance traveled
  cout << "Total distance traveled: " << total_distance_traveled << endl;

  return 0;
}
