#include <vector>
#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std;

struct Product {
  int id;
  int units;
  double price;
  double sales;
};

void calculateSales(vector<Product>& products) {
  for (Product& product : products) {
    product.sales = product.units * product.price;
  }
}

void dualSort(vector<Product>& products) {
  for (int i = 0; i < products.size() - 1; i++) {
    int maxIndex = i;
    double maxValue = products[i].sales;
    int tempid = products[i].id;

    for (int j = i + 1; j < products.size(); j++) {
      if (products[j].sales > maxValue) {
        maxValue = products[j].sales;
        tempid = products[j].id;
        maxIndex = j;
      }
    }

    products[maxIndex].sales = products[i].sales;
    products[maxIndex].id = products[i].id;
    products[i].sales = maxValue;
    products[i].id = tempid;
  }
}

void showOrder(const vector<Product>& products) {
  cout << "Product Number\tSales\n";
  cout << "----------------------------------\n";
  for (const Product& product : products) {
    cout << product.id << "\t\t$";
    cout << fixed << showpoint << setprecision(2) << product.sales << endl;
  }
  cout << endl;
}

void showTotals(const vector<Product>& products) {
  int totalUnits = 0;
  double totalSales = 0.0;

  for (const Product& product : products) {
    totalUnits += product.units;
    totalSales += product.sales;
  }

  cout << "Total Units Sold: " << totalUnits << endl;
  cout << "Total Sales: $" << totalSales << endl;
}

int main() {
  vector<Product> products = {
    {914, 842, 12.95, 0.0},
    {915, 416, 14.95, 0.0},
    {916, 127, 18.95, 0.0},
    {917, 514, 16.95, 0.0},
    {918, 437, 21.95, 0.0},
    {919, 269, 31.95, 0.0},
    {920, 97, 14.95, 0.0},
    {921, 492, 14.95, 0.0},
    {922, 212, 16.95, 0.0},
  };

  calculateSales(products);
  dualSort(products);

  showOrder(products);
  showTotals(products);

  return 0;
}
