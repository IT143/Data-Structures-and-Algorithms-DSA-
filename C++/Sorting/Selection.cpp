/*
Selection Sort: Each pass finds the smallest element from the unsorted part and swaps it with the first unsorted position
Divide the array into two parts: Left - sorted, Right - unsorted
Number of passes: N-1 (No of swaps)
Total comparisons (always): N(N−1)/2
Best case - O(n²)
Average case - O(n²)
Worst case - O(n²)
Space Complexity - O(1) (in-place sorting)
Not stable: Order of equal elements changes
*/


class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int N = arr.size();
        for (int i = 0; i < N - 1; i++) {    // Assume current position ie first index has the smallest element
            int minIndex = i;
            for (int j = i + 1; j < N; j++) {    // Find the smallest element in the remaining array
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;                   // update index of smallest element
                }
            }
            swap(arr[i], arr[minIndex]);    // Swap smallest element with the first element of unsorted part
        }
    }
};
