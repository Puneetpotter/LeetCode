class Solution {
public:
    bool check(vector<int>& nums) {
        
        int i = 0;
        int n = nums.size();
        int change = 0;
        
        for(int i = 0; i < n; i++){
            
            if(nums[i] > nums[(i + 1) % n])
                change += 1;
            
        }
        
        return change <= 1;
        
    }
};