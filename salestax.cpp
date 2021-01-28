#include <iostream>
using namespace std;


double addtax(double taxRate, double cost) {
  // double taxRate;
  // double cost;
  double cost1;
  cost1 = cost;
  taxRate = cost * (taxRate/100);
  cost1 += taxRate;
  cout << "Cost including tax is, " << cost1 << endl;
  return cost1;
}

int main ( ) {
  addtax(15.00, 50.00);
  return 0;
}
