#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function prototypes
void calculateSales(const std::vector<int>& units,
                     const std::vector<double>& prices,
                     std::vector<double>& sales);
void showOrder(const std::vector<double>& sales,
                 const std::vector<int>& id);
void dualSort(std::vector<int>& id, std::vector<double>& sales);
void showTotals(const std::vector<double>& sales,
                 const std::vector<int>& units);

int main() {
  // Vector of product ID numbers
  std::vector<int> id = {914, 915, 916, 917, 918, 919, 920, 921, 922};

  // Vector of number of units sold for each product
  std::vector<int> units = {842, 416, 127, 514, 437, 269, 97, 492, 212};

  // Vector of product prices
  std::vector<double> prices = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95,
                              14.95, 16.95};

  // Vector to hold the computed sales amounts
  std::vector<double> sales;

  // Calculate each product's sales.
  calculateSales(units, prices, sales);

  // Sort the elements in the sales vector in descending order and shuffle the
  // ID numbers in the id vector to keep them in parallel.
  dualSort(id, sales);

  // Set the numeric output formatting.
  cout << setprecision(2) << fixed << showpoint;

  // Display the products and sales amounts.
  showOrder(sales, id);

  // Display total units sold and total sales.
  showTotals(sales, units);

  return 0;
}

// Calculates each product's sales by multiplying its units sold by each
// unit's price. The result is stored in the sales vector.
void calculateSales(const std::vector<int>& units,
                     const std::vector<double>& prices,
                     std::vector<double>& sales) {
  sales.resize(units.size());
  for (int i = 0; i < units.size(); i++) {
    sales[i] = units[i] * prices[i];
  }
}

// Performs a descending order selection sort on the sales vector. The elements
// of the id vector are exchanged identically as those of the sales vector.
void dualSort(std::vector<int>& id, std::vector<double>& sales) {
  for (int i = 0; i < sales.size() - 1; i++) {
    int maxIndex = i;
    double maxValue = sales[i];
    int tempid = id[i];

    for (int j = i + 1; j < sales.size(); j++) {
      if (sales[j] > maxValue) {
        maxValue = sales[j];
        tempid = id[j];
        maxIndex = j;
      }
    }

    sales[maxIndex] = sales[i];
    id[maxIndex] = id[i];
    sales[i] = maxValue;
    id[i] = tempid;
  }
}

// Displays the sorted list of product numbers and sales.
void showOrder(const std::vector<double>& sales,
                 const std::vector<int>& id) {
  cout << "Product Number\tSales\n";
  cout << "----------------------------------\n";
  for (int i = 0; i < sales.size(); i++) {
    cout << id[i] << "\t\t$" << sales[i] << endl;
  }
  cout << endl;
}

// Calculates and displays the total units (of all products) sold and the
// total sales.
void showTotals(const std::vector<double>& sales,
                 const std::vector<int>& units) {
  int totalUnits = 0;
  
