#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int NUM_PRODS = 9; // The number of products produced
const int MIN_PRODNUM = 914; // The lowest product number
const int MAX_PRODNUM = 922; // The highest product number

// Function prototypes
int getProdNum();
void displayProd(const string[], const string[], const double[], int);

int main() {
  // Array of product IDs
  int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920,
                         921, 922};

  // Array of product titles
  string title[NUM_PRODS] = {
                          "Six Steps to Leadership",
                          "Six Steps to Leadership",
                          "The Road to Excellence",
                          "Seven Lessons of Quality",
                          "Seven Lessons of Quality",
                          "Seven Lessons of Quality",
                          "Teams Are Made, Not Born",
                          "Leadership for the Future",
                          "Leadership for the Future"
                        };

  // Array of product descriptions
  string description[NUM_PRODS] = {
                                "Book", "Audio CD", "DVD",
                                "Book", "Audio CD", "DVD",
                                "Book", "Book", "Audio CD"
                              };

  // Array of product prices
  double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95,
                             31.95, 14.95, 14.95, 16.95};

  int prodNum; // To hold a product number
  int index; // To hold search results
  char again; // To hold a Y or N answer

  do {
    // Get the desired product number.
    prodNum = getProdNum();

    // Search for the product number.
    index = std::find(id, id + NUM_PRODS, prodNum) - id;

    // Display the results of the search.
    if (index == -1) {
      cout << "That product number was not found.\n";
    } else {
      displayProd(title, description, prices, index);
    }

    // Does the user want to do this again?
    cout << "Would you like to look up another product? (y/n) ";
    cin >> again;
  } while (again == 'y' || again == 'Y');

  return 0;
}

// ***************************************************
// Definition of getProdNum function
// The getProdNum function asks the user to enter a
// product number. The input is validated, and when
// a valid number is entered, it is returned.
// ***************************************************

int getProdNum() {
  int prodNum; // Product number

  cout << "Enter the item's product number: ";
  cin >> prodNum;

  // Validate input
  while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM) {
    cout << "Enter a number in the range of " << MIN_PRODNUM << " through " << MAX_PRODNUM << ".\n";
    cin >> prodNum;
  }

  return prodNum;
}

// *************************************************************
// The displayProd function accepts three arrays and an int.
// The arrays parameters are expected to hold the title,
// description, and prices arrays defined in main. The index
// parameter holds a subscript. This function displays the
// information in each array contained at the subscript.
// *************************************************************

void displayProd(const string title[], const string desc[],
                  const double price[], int index) {
  cout << "Title: " << title[index] << endl;
  cout << "Description: " << desc[index] << endl;
  cout << "Price: $" << price[index] << endl;
}
