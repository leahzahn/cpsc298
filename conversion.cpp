#include <iostream>
using namespace std;

//takes parameters of feet and inches and returns the total number of inches
int feetAndInchesToInches(int feet, int inches){
  return (feet * 12) + inches;
}

// takes inches as a parameter and converts it to meters, returning the value
// in meters
float inchesToMeters(int inches){
  const float METERS_IN_FOOT = 0.3048;
  const float METERS_IN_INCH = METERS_IN_FOOT / 12;
  return inches * METERS_IN_INCH;
}

// takes meters as a parameter and converts it to centimeters
float metersToCm(float meters){
  return meters * 100;
}

// reads a boolean by reference that exits the program if true. The function
// prompts the user for input and returns the total number of inches unless the
// user exits
int readInput(bool& exit){
  string userInput;
  int feet;
  int inches;
  cout << "Entering a length: " << endl;
  cout << "Input the number of feet (enter \"exit\" to end the program): ";
  cin >> userInput;
  if (userInput != "exit"){
    feet = stoi(userInput);
    cout << "Input the number of inches: ";
    cin >> inches;

    return feetAndInchesToInches(feet, inches);
  }
  else {
    exit = true;
    cout << "Exiting" << endl;
    return -1;
  }

}

// Prints to console the number of meters and centimeters, converted from the given inches
void output(int inches){
  cout << "Length in meters: " << inchesToMeters(inches) << endl;
  cout << "Length in centimeters: " << metersToCm(inchesToMeters(inches)) << endl;
}

// main loops through user input until "exit" is entered
int main(int argc, char** argv){
  bool exit = false;
  int inches;

  inches = readInput(exit);
  while (!exit){
    output(inches);
    inches = readInput(exit);
  }


  return 0;
}
