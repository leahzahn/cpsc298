#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char** argv){

  // create an array of size 10
  int tempArray[10] = {0};
  cout << "Enter a list of numbers on a single line separated by spaces: " ;

  // get input from user and add first 10 nonnegative numbers to tempArray
  string line;
  getline(cin, line);
  istringstream inSS(line);
  int next;
  int counter = 0;
  while (!inSS.eof() && counter < 10){
    inSS >> next;
    if (next >= 0){
      tempArray[counter] = next;
      ++counter;
    }
  }

  // create a new array and add numbers to remove any extra zeros if less than 10 numbers were entered
  int numberArray[counter] = {0};
  for (int i = 0; i < counter; ++i){
    numberArray[i] = tempArray[i];
  }

  // print the array
  cout << "numberArray: {";
  for (int i = 0; i < counter; ++i){
    cout << numberArray[i] << " ";
  }
  cout << "}" << endl;



  return 0;
}
