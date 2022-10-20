class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto max=*max_element(nums.begin(),nums.end());
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]*2>max)
                flag++;
             if(flag>1)
                return -1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max)
                return i;
        }
        return 1;
    }
};