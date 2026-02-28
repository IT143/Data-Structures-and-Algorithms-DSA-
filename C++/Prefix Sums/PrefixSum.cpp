#include <iostream>
using namespace std;

/*
Prefix sum means adding numbers one-by-one from the start and storing each running total in a new array
Time Complexity: O(n) — because we go through the array once and calculate each prefix sum.
Space Complexity: O(n) — because we create a new array of size n to store the prefix sums.
*/

#include <vector>  // Allows to use vector container

vector<int> preSum(vector<int> &arr);      // Function declaration: Returns a vector of integers

int main() {
  vector<int> arr = {10,20,30,40,50};       // Create a vector named arr with 5 elements
  vector<int> prefixSum = preSum(arr);      // Call preSum(arr) and store the returned values in another vector named prefixSum

  for(auto i: prefixSum) {         // Range-Based loop: Loops through each element
    cout << i << " ";  
  }
}

vector<int> preSum(vector<int> &arr) {
  int n = arr.size();      // Gets the number of elements in the arr vector

  vector<int> preSum(n);    // Creates a vector of size n: preSum(5) : {0,0,0,0,0}

  preSum[0] = arr[0];      // First prefix Sum is always the first element

  for(int i = 1; i < n; i++) {    // Loops from second element 
    preSum[i] = preSum[i-1] + arr[i];      // Prefix Sum logic: Current prefix Sum = Previous prefix Sum + Current element
  }

  return preSum;    // Returns the prefix sum values in the vector
}
