/*
In procedural programming, the code is organised around functions.
In object-oriented programming, the code is organised around objects.
Class - User-Defined Data Type.
Blueprint for objects.
For example, Car is a class and BMW, Audi, McLaren, Ferrari, Mercedes are objects.
Objects are instances of a class
*/

#include <iostream>
using namespace std;

class Cars {      // Class name
  public:          // Access Specifier: Accessibility and visibility of class members, i.e., attributes outside the class
  string name;      // Attributes: Variables declared within a class
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
