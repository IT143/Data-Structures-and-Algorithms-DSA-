#include <iostream>
using namespace std;

void change(int *a);

int main() {
  int x = 3;
  cout << "Address of the variable: " << &x;      // The value x = 3 gets stored in memory with the address 0x61ff0c
  change(&x);    // Passes the address of the variable
  cout << x; 
}

void change (int *a) {    // Create a pointer a (int data type) to store the address of the variable pointing to variable x = 3
  *a = 9; // Dereference pointer (*)
}
