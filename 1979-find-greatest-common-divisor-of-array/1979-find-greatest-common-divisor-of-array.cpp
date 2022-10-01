class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1];
        int b=nums[0];
        while(b>0){
            if(nums[0]%b==0&&a%b==0)
                break;
            b--;
        }
        return b;
    }
};