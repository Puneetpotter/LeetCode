class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> longestSubsequence;
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            
            if(longestSubsequence.size()==0 || longestSubsequence.back()<nums[i])
                longestSubsequence.push_back(nums[i]);
            
            else{
                auto index=lower_bound(longestSubsequence.begin(), longestSubsequence.end(), nums[i])-longestSubsequence.begin();
                longestSubsequence[index]=nums[i];
            }
        }
        
        return longestSubsequence.size();
    }
};