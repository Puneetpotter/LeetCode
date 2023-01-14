class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int firstzero = lower_bound(nums.begin(),nums.end(),0) - nums.begin();
        int firstpos = upper_bound(nums.begin(),nums.end(),0) - nums.begin();
        
        int n = nums.size();
        
        return max(firstzero, (n - firstpos));
        
    }
};