#include <iostream>
using namespace std;

// function that takes two numbers passed by reference and sets them to zero
void zeroBoth(int& num1, int& num2){
  num1 = 0;
  num2 = 0;
}

int main(int argc, char** argv){
  // take two numbers from command line input, print before and after calling the zeroBoth function
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  cout << "Before: " << num1 << ", " << num2 << endl;

  zeroBoth(num1, num2);

  cout << "After: " << num1 << ", " << num2 << endl;

  return 0;
}
