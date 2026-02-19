/*
Call stack: Stack data structure used by C++ to manage function calls.
Each time a function is called, a stack frame is pushed onto the stack.

A stack frame stores: Function parameters (values passed), Local variables (values declared), Return address (where to go back after the function ends)

When the function finishes, its stack frame is popped, and control returns to the caller.
The stack pointer (SP) points to the top of the call stack and manages push and pop operations.
It works on the LIFO (Last In, First Out) principle.
*/

// Functions are pushed onto the stack in the order A - B - C
// Popped in reverse order C - B - A, after which D runs separately.
#include <iostream>
using namespace std;

void A();
void B();
void C();
void D();

int main() {
    A();
    D();
}

void D() {
    float d = 40.5f;
    cout << "Function D" << endl;
}

void C() {
    double c = 30.5;
    cout << "Function C" << endl;
}

void B() {
    int b = 20;
    C();
    cout << "Function B" << endl;
}

void A() {
    int a = 10;
    B();
    cout << "Function A" << endl;
}
