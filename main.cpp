//*****************************************************************************
// Author: Glen
// Assignment: 1
// Date: January 6 2025 HAPPY NEW YEAR!
// Description:
// Sources:
//*****************************************************************************

#include <iostream>

using namespace std;

int main()
{
  // Input Variables
  int employeeId = 0;
  int hoursWorked = 0;
  int hourlyRate = 0;
  int federalWitholdingRate = 0;

  // Output Variables
  int totalGrossPay = 0;
  int federalTaxWitholding = 0;
  int netPay = 0;


  cout << "Welcome to my Weekly Payroll program!!" << endl;

  cout << "Enter your employee ID number (numbers only): ";
  cin >> employeeId;

  cout << "Enter number of hours worked (whole numbers): ";
  cin >> hoursWorked;

  cout << "Enter the hourly rate: ";
  cin >> hourlyRate;

  cout << "Enter the federal withholding rate:  ";
  cin >> federalWitholdingRate;

  // Calculations
  totalGrossPay = hoursWorked * hourlyRate;
  federalTaxWitholding = totalGrossPay * (federalWitholdingRate / 100.0);
  netPay = totalGrossPay - federalTaxWitholding;

  cout << endl;
  cout << "Your Payroll Summary:" << endl;
  cout << "Total Gross Pay: $" << totalGrossPay << endl;
  cout << "Federal Tax Withholding:  $" << federalTaxWitholding << endl;
  cout << "Net Pay:  $" << netPay << endl;

  cout << endl;
  cout << "Thank you for using my Weekly Payroll program!!" << endl;

  return 0;
}
