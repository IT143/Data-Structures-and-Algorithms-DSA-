#include <iostream>
using namespace std;

void head(int n);
void tail(int n);

int main() {
    head(5);
    cout << endl;
    tail(5);
}

void head(int n) {
    if (n != 0) {
        head(n - 1);  // Calls same function with n-1 and continues until n becomes 0
    }
    cout << n << " ";   // Prints n after recursive call finishes, so printing happens while returning
  // Output order: 0 1 2 3 4 5
}

void tail(int n) {
    if (n == 0)  // Stop recursion when n is 0
        return;
    cout << n << " ";    // Prints n before recursive call, so printing happens while going deeper
    tail(n - 1);  // Calls same function with n-1
    // Output order: 5 4 3 2 1
}

/*
Tail recursion can be more memory-efficient and may benefit from compiler optimisations.
Use tail recursion for problems that process sequentially in forward order (like counting, summing, traversal)
Use head recursion for problems that need results in reverse order (like reverse printing, tree processing, backtracking)
*/
