#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char** argv){

  int tempArray[10] = {0};
  cout << "Enter a list of numbers on a single line separated by spaces: " ;

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

  cout << "counter: " << counter << endl;

  int numberArray[counter] = {0};
  for (int i = 0; i < counter; ++i){
    numberArray[i] = tempArray[i];
  }

  cout << "numberArray: {";
  for (int i = 0; i < counter; ++i){
    cout << numberArray[i] << " ";
  }
  cout << "}" << endl;



  return 0;
}
