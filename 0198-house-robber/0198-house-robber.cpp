class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int second = 0;
        for(int i = n - 1;i >= 0;i--) {
            int way1 = nums[i] + first;
            int way2 = second;
            first = second;
            second = max(way1,way2);
        }
        return second;
    }
};