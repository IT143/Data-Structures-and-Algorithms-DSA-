#include <iostream>
using namespace std;

inline int Sum(int a, int b);

// Compiler replaces the function call with actual code, making the execution faster

int main() {
  int x,y;
  cout << "Enter the numbers: ";
  cin >> x >> y;
  cout << "Sum: " << Sum(x,y);    // Instead of jumping to function, compiler may directly do x + y
}

inline int Sum(int a, int b) {
  return a + b;    // Compiler replaces Sum(x,y) with x+y
}

// Function Call Overhead: The extra time and memory used when the program jumps to a function and returns after execution.
/*
1. It reduces function call overhead  
2. It is a request, not a guarantee, as the compiler may ignore it for large and complex functions.
3. Best case for small and simple functions.
*/
