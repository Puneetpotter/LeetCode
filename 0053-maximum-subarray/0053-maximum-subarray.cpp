class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum1=0,sum2=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            if(sum1>sum2)
                sum2=sum1;
            if(sum1<0)
                sum1=0;
        }
        return sum2;
    }
};