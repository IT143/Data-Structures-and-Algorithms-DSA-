class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long n = arr.size() + 1;
        long expectedSum = n * (n + 1) / 2;
        long actualSum = 0;

        for (int x : arr) {
            actualSum += x;
        }

        return (int)(expectedSum - actualSum);
        
    }
};


/*
The array is supposed to contain all numbers from 1 to n, but exactly one number is missing.
Since the sum of numbers from 1 to n is always fixed and given by n(n+1)/2, I first calculate this expected sum.
Then I compute the sum of the elements actually present in the array.
The difference between these two sums gives the missing number.
I use long long to avoid overflow for large values of n.

Technique used:
Mathematical invariant/summation difference
Why this approach:
No sorting or extra data structures

Runs in O(n) time with O(1) space
*/
