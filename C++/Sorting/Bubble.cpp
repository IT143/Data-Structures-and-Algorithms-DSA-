/*
Bubble Sorting: Repeatedly swaps and compares adjacent elements
No of comaprisons: N(N−1) / 2 (No of swaps)
No of passes: N - 1
Best case (already sorted with swapped flag): O(n)
Average case: O(n²)
Worst case: O(n²) (Reversed Sorted Array)
Space complexity: O(1) because sorting happens in-place (no extra memory)
Bubble sort is stable: Equal elements keep their original order
Uses a swapped flag optimisation to stop early
Mostly used for learning, not real systems 
*/

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int N = arr.size();                  
        bool swapped;   // Tells us if an element is swapped or not
        
        for (int i = 0; i <= N; i++) {    // Outer Loop: After every pass, the largest element moves to the end
            swapped = false;                                // Assume no swaps will happen in this pass
            for (int j = 0; j < N - i - 1; j++) {      // Inner loop compares adjacent elements;  N - i - 1 ensures we ignore the already sorted part at the end
                if (arr[j] > arr[j+1]) {           // Swap elements so the bigger element moves to the right
                    swap(arr[j], arr[j+1]);
                    swapped = true;        // Marks that a swap happened
                }
            }
        }
    }
};
