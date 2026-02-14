#include <iostream>
using namespace std;

void function(int a, int b = 12);  
// Rule 1: Default values should be specified in the function declaration
// Rule 2: Default arguments can't be modified; if we change them in the function definition, it could lead to a compilation error
// Rule 3: Default arguments must be from right to left

/*
Rule 4: Function Overloading Ambiguity (Compiler cannot determine which function to call 
because a single function call could potentially match multiple definitions)
void function(int a = 6, int b = 13); 
void function(int a);
void function(int a, b) 
*/

int main() {
  function();    // When no value is passed, it prints the default value inthe  function declaration
  function(3,6);  // When a value is passed, it ignores the default value
}

void function(int a) {
  cout << a << endl;
}
