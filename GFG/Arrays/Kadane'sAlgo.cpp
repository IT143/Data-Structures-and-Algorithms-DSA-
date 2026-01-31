class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int currSum = arr[0];
        int maxSum = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
        
};

/*
Kadane's Algorithm: Finds the maximum sum of a contiguous subarray in one pass.
Pattern Name: Dynamic Programming (1D) + Greedy
DP part: best answer ending at current index
Greedy part: discard negative running sums immediately
Time: O(n)
Space: O(1)

Never carry a negative sum forward. While scanning the array:
Keep a running sum of the current subarray
If that sum becomes negative, reset it
Track the maximum sum seen at any point
*/
