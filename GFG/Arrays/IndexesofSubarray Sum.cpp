class Solution {
  public:
    vector<int> subarraySum(vector<int>& arr, int target) {
    int sum = 0, left = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (sum > target) {
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            return {left + 1, right + 1};
        }
    }
    return {-1};
    }
};

// Sliding Window Technique:
// Use two pointers to represent a continuous subarray.
// Expand the window by moving right and adding to the sum.
// If sum becomes greater than target, shrink from left.
// Since all numbers are positive, the sum only increases or decreases predictably.
// When sum equals target, the current window is the answer.
// Sliding window avoids checking all subarrays and reduces the time complexity from O(n²) to O(n) by reusing the previous sum.  
