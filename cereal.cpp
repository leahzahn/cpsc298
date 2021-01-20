#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  const double METRIC_TON = 35273.92; //number of ounces in one metric ton
  double ouncesPerPackage;
  double tonsPerPackage;
  double numBoxesInTon;

  // get the weight of one package using console input
  cout << "Enter the weight of a package of breakfast cereal in ounces: " << endl;
  cin >> ouncesPerPackage;

  if (ouncesPerPackage <= 0){
    cerr << "ERROR: please enter a positive number of ounces" << endl;
  }

  // calculate the weight in metric tons and the number of boxes for one metric
  // ton of cereal.
  tonsPerPackage = ouncesPerPackage / METRIC_TON;
  numBoxesInTon = METRIC_TON / ouncesPerPackage;

  // output info
  cout << ouncesPerPackage << " ounces is equal to " << tonsPerPackage << " metric tons." << endl;
  cout << numBoxesInTon << " boxes would be needed for one metric ton of cereal" << endl;


  return 0;
}
