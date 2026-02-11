#include <iostream>
using namespace std;
//Keyword(Return Type) Function Name Parameters(Inputs)

int square(int x);  //Function Declaration (Introduces a function to the comppiler)

int main() {
  int a;
  cout << "Enter the number: ";
  cin >> a;
  cout << "Sqaure of the number: " << square(a);  //Calling of the function (can be performed multiple times)
}

int square(int x) {  
  return x*x;          //Function Defintion
}

//Function - Reusable block of code that performs a specific task
/*
1. Avoids Repetition
2. Readable Code
3. Easy Debugging 
4. Modular Design (Divides big problems into parts) 
5. Simpler testing (Checks each part independently)
6. Team Friendly (Multiple people can work in parallel) 
*/
