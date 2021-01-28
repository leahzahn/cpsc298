#include <iostream>
using namespace std;

// function that takes the tax rate and cost as parameters and returns the cost with tax included as a float
float addTax(float taxRate, float cost){
  return cost + (cost * taxRate);
}

int main(int argc, char** argv){
  // take two floats from command line input for the tax rate and cost of the item
  float tax = stof(argv[1]);
  float cost = stof(argv[2]);

  // check if both the tax and cost are nonnegative
  if (tax < 0 || cost < 0){
    cerr << "ERROR: please enter a positive tax and cost" << endl;
    return 1;
  }

  // print the cost before and after tax
  cout << "Cost before tax: $" << cost << endl << "Cost after " << tax << "% tax: $" << addTax(tax, cost) << endl;

  return 0;
}
