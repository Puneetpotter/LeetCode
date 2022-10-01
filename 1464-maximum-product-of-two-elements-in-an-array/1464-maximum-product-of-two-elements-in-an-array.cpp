class Solution {
public:
    int maxProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        auto it=nums.end();
        return (*(it-1)-1)*(*(it-2)-1);
    }
};