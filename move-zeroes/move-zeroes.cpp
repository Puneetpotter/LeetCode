class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
            i--;
            }
        }
        for(int i=nums.size();i<n;i++){
            nums.push_back(0);
        }
    }
};