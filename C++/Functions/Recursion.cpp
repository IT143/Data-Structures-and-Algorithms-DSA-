#include <iostream>
using namespace std;

void helloWorld (int n);

int main() {
  helloWorld(5);     
}

void helloWorld (int n) {  // Recursive Function: A function which calls itself repeatedly until the base condition is met
  if (n == 0) {    // Base Case (Stopping Condition) : Stops recursion when n == 0
    return;
  }
  cout << "Hello World!" << endl;    // Prints Hello World before making the next call
  helloWorld(n-1);  // Recursive Case: Calls the function with n-1
}
