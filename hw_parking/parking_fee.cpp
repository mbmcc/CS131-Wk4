#include <iostream>
#include <iomanip>

/*/////////////////////////
// A parking garage charges a $2.00 minimum fee to park for up to three hours.
// The garage charges an additional $0.50 per hour for each hour or part
// thereof in excess of three hours. The maximum charge for any given
// 24-hour period is $10.00. Assume that no car parks for longer than 24
// hours at a time.
//
// Write a program that calculates and prints the parking charges for each of
// three customers who parked their cars in this garage yesterday.
// You should enter the hours parked for each customer. Your program should
// print the results in a neat tabular format and should calculate and print
// the total of yesterday’s receipts. The program should use the function
// calculateCharges to determine the charge for each customer. Your outputs
// should appear in the following format:
//
// Car        Hours        Charge
// 1            1.5             2.00
// 2            4.0             2.50
// 3            24.0           10.00
// TOTAL   29.5           14.50
// _____________________________________
/*/////////////////////////*


// Do I manually put in each car or is there a way to do it programatically?

int main() {
  int totalCars = 0;
  double totalHours = 0;
  double totalCharged = 0;

/* carOne(carNumber, hours) {
 calculateCharges(hours)
 charges += totalCharged;
 
}
*/

  return 0;
}
double calculateCharges(double hours) {
  // Calculates the charges hours
  double hours = 0.00;
  double charge = 0.00;

    if (hours <= 3) {
    charge = 2;
  } else {
    charge = 2 + (hours -3) * .5;
  }
  if (charge > 10) {
    charge = 10;
  }
  return double charge;
}

double calculateCharges(int hours) {
  // Calculates the charges hours
  int hours = 0;
  double charge = 0;

    if (hours <= 3) {
    charge = 2;
  } else {
    charge = 2 + (hours -3) * .5;
  }
  if (charge > 10) {
    charge = 10;
  }
  return double charge;
}

void printCharges() {
  // Prints the charges per car
  std::cout << setw(2) << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
  // for each car in array of cars
  // print
  std::cout << setw(2) << carNumber << << setw(10) << hours << setw(10) << charge << endl;
  std::cout << setw(2) << totalCars << << setw(10) << totalHours << setw(10) << totalCharged << endl;
}

// Can I set a cars object that has the properties of Car Number, Hours and Charge
// and the call each unique item in the result?
