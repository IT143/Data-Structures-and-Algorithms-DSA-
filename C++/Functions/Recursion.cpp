#include <iostream>
using namespace std;

void helloWorld (int n);

int main() {
  helloWorld(5);     
}

void helloWorld (int n) {
  if (n == 0) {
    return;
  }
  cout << "Hello World!" << endl;
  helloWorld(n-1);
}
