#include <iostream>
using namespace std;

int nested(int n);

int main() {
    cout << nested(95);
    return 0;
}

int nested(int n) {
    if (n > 100)    // If n is greater than 100, stops recursion and returns n - 10
        return n - 10;  
    return nested(nested(n + 11));  // First nested(N+11) is called and then its result is passed again into nested(int n)
}

// Output: 91

/*
Nested recursion: When a function calls itself inside another call of itself.
Complex and use only when necessary
*/
