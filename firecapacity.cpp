#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int maxCapacity;
  int numPpl;
  int extraPpl;

  //get the maximum capacity
  cout << "Enter the max capacity of the room: " << endl;
  cin >> maxCapacity;

  // get the number of people in the meeting
  cout << "Enter the number of people to attend the meeting: " << endl;
  cin >> numPpl;

  // check if the entered values are negative
  if (numPpl < 0 || maxCapacity < 0){
    cerr << "ERROR: please enter a positive number of people" << endl;
  }

  // if the number of people is less than the capacity of the room, then
  // the meeting is legal, and possible additional people are outputted.
  else if (numPpl <= maxCapacity){
    extraPpl = maxCapacity - numPpl;
    cout << "It is legal to hold the meeting. " << endl << extraPpl << " additional people may legally attend" << endl;
  }

  // if the number of of people in the meeting exceed the maximum capacity, then
  // the meeting cannot be held, the the number of people that must be excluded
  // is outputted.
  else{
    extraPpl = numPpl - maxCapacity;
    cout << "The meeting cannot be held as planned due to fire regulations. " << endl << extraPpl << " must be excluded in order to meet regulations. " << endl;
  }

  return 0;
}
