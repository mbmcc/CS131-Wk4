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
/////////////////////////*/


// Do I manually put in each car or is there a way to do it programatically?
// END OF NOTES

#include <iostream>
#include <iomanip>
using namespace std;
// END OF HEAD

// GLOBALS
  double totalHours = 0;
  double totalCharged = 0;
  int carNumber = 0;
//      Can I set a cars object that has the properties of Car Number, Hours and Charge
//      and the call each unique item in the result?
    int totalCars = 0;
    double hours = 0.0;
    double charges = 0.0;
// END OF GLOBAL


// FUNCTIONS
/*
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
  return double charges;
}
*/
  // Prints the charges per car
void printHeader(){
     std::cout << setw(2) << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
}
void printCharges() {
      std::cout << setw(2) << carNumber << setw(11) << hours << setw(5) << "$" << std::fixed << std::showpoint << std::setprecision(2) << charges << endl;
}
void printTotal(){
      std::cout << "Totals" << setw(7) << totalHours << setw(9) << totalCharged << endl;
}

double calculateCharges(double hours) {
  // Calculates the charges hours
  if (hours <= 3) {
    charges = 2;
  } else {
    charges = 2 + (hours -3) * .5;
  }
  if (charges > 10) {
    charges = 10;
  }
  return charges;
}

int main() {
    //Manually inputing each car
    printHeader();
    //carOne 1.5 hours
    carNumber = 1;
    totalCars +=1;
    hours = 1.5;
    calculateCharges(hours);
    charges += totalCharged;
    hours += totalHours;
    printCharges();

    //carTwo 4 hours
    carNumber = 2;
    totalCars +=1;
    hours = 4;
    calculateCharges(hours);
    charges += totalCharged;
    hours += totalHours;
    printCharges();

    //carThree 24 hours    
    carNumber = 3;
    totalCars += 1;
    hours = 24;
    calculateCharges(hours);
    charges += totalCharged;
    hours += totalHours;
    printCharges();
    
    //Total
    printTotal();

    return 0;
} //END OF MAIN
