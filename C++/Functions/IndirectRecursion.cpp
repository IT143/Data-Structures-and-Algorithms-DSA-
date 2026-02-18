#include <iostream>
using namespace std;

void funcA(int);
void funcB(int);

void funcA(int n) {
    if (n > 0) {
        cout << n << " ";
        funcB(n - 1);  // Calls funcB with n-1 which is indirect recursion (A calls B)
    }
}

void funcB(int n) {
    if (n > 0) {
        cout << n << " ";
        funcA(n / 2);  // Calls funcA with n/2 which is indirect recursion (B calls A)
    }
}

int main() {
    funcA(10);
    return 0;
}

/*
Indirect recursion is when one function calls another function, and that second function calls the first function again.
A recursive loop between two or more functions instead of a function calling itself directly.
*/
