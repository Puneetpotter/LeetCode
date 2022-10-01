class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum;
        int summation=0;
        for(int i=0;i<nums.size();i++)
        {
            summation+=nums[i];
            sum.push_back(summation);
        }
        return sum;
    }
};