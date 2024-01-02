class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        int maxFreq=INT_MIN;
        unordered_map<int, int> freq;
        
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
            maxFreq=max(maxFreq, freq[nums[i]]);
        }
        
        vector<vector<int>> ans(maxFreq);
        
        for(int i=0; i<n; i++){
            ans[freq[nums[i]]-1].push_back(nums[i]);
            freq[nums[i]]--;
        }
        
        return ans;
    }
};