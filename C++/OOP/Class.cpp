/*
Class - User-Defined Data Type.
Blueprint for objects.
For example, Car is a class and BMW, Audi, McLaren, Ferrari, Mercedes are objects.
*/

#include <iostream>
using namespace std;

class Cars {      // Class name
  public:          // Access Specifier: Accessibility and visibility of class members, i.e., attributes
  string name;      // Attributes
  string colour;
};

int main() {
  Cars car1;      // Object of class Cars
  Cars car2;

  car1.name = "McLaren";    // Access Attributes and set values
  car1.colour = "Orange";

  car2.name = "Ferrari";
  car2.colour = "Red";
  
  cout << "Car1 name: " << car1.name << endl;
  cout << "Car1 Colour: " << car1.colour << endl;

  cout << "Car2 name: " << car2.name << endl;
  cout << "Car2 Colour: " << car2.colour << endl;
}
