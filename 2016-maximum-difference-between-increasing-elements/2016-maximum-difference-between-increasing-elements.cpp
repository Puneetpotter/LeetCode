class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int maxdif = -1; 
        int minel = nums[0];
        
        if(nums[0] < nums[1])
                maxdif = nums[1] - nums[0];
        
        if(nums.size() == 2){
            
            return maxdif;
            
        }
        
        for(int i = 1; i < nums.size() - 1; i++){
            
            minel = min(minel, nums[i]);
            int j = i + 1;
            
            if(nums[j] > minel)
                maxdif = max(maxdif, nums[j] - minel);
            
        }
        
        return maxdif;
    }
};