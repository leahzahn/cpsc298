#include <iostream>

using namespace std;
int main(int argc, char** argv){
  const double REG_PAY = 16.00; //regular pay
  const double OVER_PAY = 16.00 * 1.5; //overtime pay is pay + half
  double hoursWorked;
  double regularHours;
  double overtimeHours;
  double grossPay;
  double socSecTax;
  double fedTax;
  double stateTax;
  double medical;
  double netPay;

  // get input of number of hours worked and assign to hoursWorked
  cout << "Enter hours worked in a week: ";
  cin >> hoursWorked;

  // check for a positive number of hours entered
  if (hoursWorked <= 0){
    cerr << "ERROR: Please enter a positive number of hours" << endl;
    return -1;
  }
  else{ //if hoursWorked is positive, then the number of overtime and regular hours are calculated
    if (hoursWorked > 40.0){
      regularHours = 40.0;
      overtimeHours = hoursWorked - 40.0;
    }
    else{
      regularHours = hoursWorked;
      overtimeHours = 0;
    }
    // calculate gross pay
    grossPay = (regularHours * REG_PAY) + (overtimeHours * OVER_PAY);

    // calculating taxes and net pay
    socSecTax = grossPay * 0.06;
    fedTax = grossPay * 0.14;
    stateTax = grossPay * 0.05;
    medical = 10.00;
    netPay = grossPay - socSecTax - fedTax - stateTax - medical;

    // print out gross pay, taxes, and net pay
    cout << "Gross pay: $" << grossPay << endl;
    cout << "Social Security tax: $" << socSecTax << endl;
    cout << "Federal Income tax: $" << fedTax << endl;
    cout << "State income tax: $" << stateTax << endl;
    cout << "Medical insurance: $" << medical << endl;
    cout << "Net pay: $" << netPay << endl;
  }

  return 0;
}
