#include <iostream>
using namespace std;

int main(int argc, char** argv){
  // create an array of integers
  int size = 10;
  if (argc <= 10){
    size = argc - 1;
  }

  int* numberArray = new int[size];

  for (int i = 0; i < size; ++i){
    numberArray[i] = atoi(argv[i + 1]);
  }

  cout << "numberArray: {";
  for (int i = 0; i < size; ++i){
    cout << numberArray[i] << " ";
  }

  cout << "}" << endl;

  return 0;
}
