#include <iostream>
using namespace std;

void change(int num);

int main() {
  int x = 3;       // Original variable
  change(x);      // x is copied into num
  cout << "Pass by Value: " << x;   // Still prints 3
}

void change(int num) {    // This function gets a COPY of the number
  num = 9;              // We change the copy only
  cout << num << endl;  // Prints the updated copied number
}

// Not preferred for large-sized data structures, as it involves copying the value

/*
Pass-by-value means that when you send a variable to a function, the function gets a copy of it.
If the function changes it, only the copy changes.
The original variable stays the same.
*/
