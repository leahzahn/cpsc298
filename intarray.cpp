#include <iostream>
using namespace std;

int main(int argc, char** argv){
  // // determine the size of the array
  // int size = 10;
  // if (argc <= 10){
  //   size = argc - 1;
  // }
  //
  // // create pointer to first element of the array
  // int* numberArray = new int[size];
  //
  // // add each element of the command line input to the array
  // for (int i = 0; i < size; ++i){
  //   numberArray[i] = atoi(argv[i + 1]);
  // }
  //
  // cout << "numberArray: {";
  // for (int i = 0; i < size; ++i){
  //   cout << numberArray[i] << " ";
  // }
  //
  // cout << "}" << endl;
  //
  // delete numberArray;


  int numberArray[10] = {0};
  int counter = 0;
  int userInput;
  cout << ""
  while (counter < 10){
    cin >> userInput;
    if (userInput >= 0){
      numberArray[counter] = userInput;
      ++ counter;
    }
  }

  cout << "numberArray: {";
  for (int i = 0; i < 10; ++i){
    cout << numberArray[i] << " ";
  }
cout << "}" << endl;



  return 0;
}
