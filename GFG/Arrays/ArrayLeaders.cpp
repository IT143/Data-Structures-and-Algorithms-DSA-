class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int N = arr.size();
        vector<int> leader;
        int max = arr[N-1];
        leader.push_back(max);
        
        for(int i = N-2; i >= 0; i--) {
            if(arr[i] >= max) {
                max = arr[i];
                leader.push_back(max);
            }
        }
        reverse(leader.begin(), leader.end());
        return leader;
    }
};
