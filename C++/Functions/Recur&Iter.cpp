#include <iostream>
using namespace std;

int Recursion(int n);   // A function calls itself until a base case stops it
int Iteration(int n);  // A loop repeats instructions until a condition is false (set of instructions repeatedly executed)

int main() {
  int x;
  cout << "Enter the number: ";
  cin >> x;

  cout << "Recursion: " << Recursion(x) << endl;
  cout << "Iteration: " << Iteration(x) << endl;
}

int Recursion(int n) {
  if (n == 0) {  // Stops when there is no function call
    return 1;
  }
  return n * Recursion(n-1);
}

int Iteration(int n) {
  int res = 1;
    
  for (int i = 2; i <= n; i++) {    // Stops when the termination condition for the iterator ceases to be satisfied
    res *= i;
  }
  return res;
}
