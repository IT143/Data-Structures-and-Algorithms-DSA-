class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = -1;
        int secondLargest = -1;

        for (int x : arr) {
            if (x > largest) {
                secondLargest = largest;
                largest = x;
            }
            else if (x < largest && x > secondLargest) {
                secondLargest = x;
            }
        }

        return secondLargest;
    }
};

/*
It finds the second largest number in the array.
The largest stores the biggest value so far secondLargest stores the second biggest
Loop through the array: 
If a number is bigger than the largest, update both
If it’s smaller than the largest but bigger than secondLargest, update secondLargest
Return secondLargest.
*/
