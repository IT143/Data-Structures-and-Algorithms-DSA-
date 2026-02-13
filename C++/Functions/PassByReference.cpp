#include <iostream>
using namespace std;

void change(int &a); 

int main() {
  int x = 3;
  change(x);
  cout << x;
}

void change(int &a) {    // Passing the memory address where the original variable lives and then making changes
  a = 9;            //Argument (Actual Parameter) is passed
}

/*
This allows the function to change the value of the original argument
This is useful when you have to pass large amounts of data.
*/
