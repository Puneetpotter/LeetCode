class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        
        // Sort the vector in ascending order
        sort(nums.begin(), nums.end());
        
        // Compare two possible products:
        // 1. The product of the three largest elements.
        // 2. The product of the two smallest elements and the largest element.
        return max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
    }
};
