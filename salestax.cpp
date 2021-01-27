#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){
  return cost + (cost * taxRate);
}

int main(int argc, char** argv){
  float tax = stof(argv[1]);
  float cost = stof(argv[2]);

  if (tax < 0 || cost < 0){
    cerr << "ERROR: please enter a positive tax and cost" << endl;
    return 1;
  }

  cout << "Cost before tax: $" << cost << endl << "Cost after " << tax << "% tax: $"<< addTax(tax, cost) << endl;

  return 0;
}
