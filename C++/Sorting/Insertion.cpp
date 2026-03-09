/*
Insertion Sort: Insert each element into its correct place in the sorted portion.
Time complexity
Best case → O(n) (already sorted)
Average case → O(n²)
Worst case → O(n²)
Space complexity: O(1) (in-place)
Total comparisons (worst case): N(N − 1) / 2
*/

class Solution {
  public:
    void insertionSort(vector<int>& arr) {        
        int N = arr.size();
        for (int i = 1; i < N; i++) {      // Start from the second element because we assume the first element is already considered sorted
            int key = arr[i];              // element we want to place correctly
            int j = i - 1;                 // Index of last element in sorted part
            while (j >= 0 && arr[j] > key) {      // Shift elements greater than key to the right
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;      // Place key in the correct position
        }
    }
};
