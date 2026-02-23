#include <iostream>
using namespace std;

// An array is a group of elements of the same data type stored next to each other (contiguous) in memory.
// Each element is accessed using an index starting from 0, allowing fast access.
// Iterating an array element using a for loop.
// Size is fixed after declaration.
// Can have multiple dimensions.

void printArray(int arr[], int length);

int main() {
  
  int arr[9] = {3,6,9,23,4,7,8,1,5};    // Array Declaration: Data type, Array name, and size in square brackets [] (unchangeable).
  // Array Initialisation: Assigning values to an array using {}
  // If fewer values are given, it is called partial initialisation: int arr[9] = {3,6,9};
  // If values are given, the compiler automatically sets the array size: int arr[] = {3,6,9};
  // All elements of an array can be set to 0 using int arr[3] = {0}; - [0,0,0]
  for (int i = 0; i < 9; i++) {    // Traversing: Accessing each element one by one using a loop from index 0 to size − 1.
    cout << arr[i] << " ";
  }

  //The index must be between 0 and size − 1 and cannot be negative.

  cout << "\narr[3]: " << arr[3] << endl;    // Acessing array: array_name[index];
  cout << "arr[0]: " << arr[0] << endl;

  arr[3] = 2;    // Updating array element: array_name[index] = value;
  cout << "Updating arr[3]: " << arr[3] << endl; 

  //sizeof() operator: Returns the size of a variable or data type in bytes.
  cout << "Size of arr[0] ie one element: " << sizeof(arr[0]) << endl; // int : 4 bits for each element
  cout << "Size of arr: " << sizeof(arr) << endl;   // 9 elements in array * 4 bits for each : 36
  int length = sizeof(arr)/ sizeof(arr[0]);    // 36/4: 9 elements in the array, i.e., the length of the array
  cout << "Length of an array: " << length;

  cout << "Address of array: " << arr << endl;  // Address of the first element.
  cout << "Address of array: " << &arr[0] << endl;   // address of the first element.

  int* ptr = arr;      //Stores the address of the first array element.
  for (int i = 0; i < length; i++) {
    cout << *(ptr + i) << " ";  // Reads each element one by one, just like arr[i].
  }

  cout << "\nFunction call: ";
  printArray(arr,length);  // Function call
}

void printArray(int arr[], int length) {    // Receives the array and the length of the array
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
}
