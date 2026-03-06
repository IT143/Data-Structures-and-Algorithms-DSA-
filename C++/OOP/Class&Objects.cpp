/*
In procedural programming, the code is organised around functions.
In object-oriented programming, the code is organised around objects.
*/ 

/*
Class - User-Defined Data Type.
Blueprint for objects.
For example, Car is a class and BMW, Audi, McLaren, Ferrari, Mercedes are objects.
No memory is allocated for a class until an object is created.
Conceptual entity describing structure and behaviour.
*/

/*
Objects are instances of a class with actual values.
Memory is allocated when an object is created.
A real-world entity created from the class.
*/

/*
Methods are functions inside or outside the class
*/

#include <iostream>
using namespace std;

class Cars {      // Class name: Usually capital letters
  public:          // Access Specifier: Accessibility and visibility of class members, i.e., attributes outside the class
  string name;      // Attributes: Variables declared within a class
  string colour;

  void helloWorld() {          // Methods inside the class
    cout << "Hello World!";
  }
};

void Cars::sayGoodbye() {  // Methods outside the class: (::) - Scope Resolution - access identifiers in a specific scope outside the class
    cout << "Goodbye!" << endl;
  }

int main() {
  Cars car1;      // Object of class Cars
  Cars car2;

  car1.name = "McLaren";    // Access Attributes and set values
  car1.colour = "Orange";

  car2.name = "Ferrari";
  car2.colour = "Red";
  
  cout << "Car1 name: " << car1.name << endl;
  cout << "Car1 Colour: " << car1.colour << endl;
  car1.helloWorld();
  car1.sayGoodbye();

  cout << "Car2 name: " << car2.name << endl;
  cout << "Car2 Colour: " << car2.colour << endl;
  car2.helloWorld();
  car2.sayGoodbye();
}
