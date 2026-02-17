#include <iostream>
using namespace std;

void f(int n);

int main() {
    f(3);    // First function call -  first stack frame is created
}

void f(int n) {
    
    cout << "F(" << n << ")'s Stack Frame Pushed" << endl;
    if (n > 1) {      
        f(n - 1);  // Calls smaller function
                  // Current function waits here
        f(n - 1);  // Call smaller function again
                  // Current function still waits
    }
    cout << "F(" << n << ")'s Stack Frame Removed" << endl;  // Function finishes - removed from stack
}

/*
Descending Phase: The function keeps calling smaller functions (f(n-1)). The stack keeps growing.
Ascending Phase: When it reaches n = 1, the function stops calling. Functions finish one by one. The stack shrinks and returns.
*/

/*
Output: 
F(3)'s Stack Frame Pushed
F(2)'s Stack Frame Pushed
F(1)'s Stack Frame Pushed
F(1)'s Stack Frame Removed
F(1)'s Stack Frame Pushed
F(1)'s Stack Frame Removed
F(2)'s Stack Frame Removed
F(2)'s Stack Frame Pushed
F(1)'s Stack Frame Pushed
F(1)'s Stack Frame Removed
F(1)'s Stack Frame Pushed
F(1)'s Stack Frame Removed
F(2)'s Stack Frame Removed
F(3)'s Stack Frame Removed
*/
