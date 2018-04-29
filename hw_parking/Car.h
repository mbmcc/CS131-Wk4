#ifndef Car_H
#define  Car_H
include <iostream>
//Function Declarations
class Car {
public:
  //Default Constructor
  Car();
  //Overload Constructor
  Car(int, double);
  //Destructor
  ~Car();
  //Accessor functions
  int getCarNumber() const; //grabs the customer / car Number
  double getCharges() const; // grabs the fee totalCharged
  double getHours() const; // graps the hours the car was parked
  // Mutator functions
  void setCarNumber(int); // sets the car / customer Number
  void setHours(double); // set the hours parked


private:


}



#endif
