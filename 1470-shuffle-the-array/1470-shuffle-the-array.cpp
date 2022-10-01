class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int>ans;
        int m=nums.size();
        ans.push_back(nums[0]);
        int j=0;
      for(int i=2;i<=n;)
      {
          ans.push_back(nums[n+j]);
          ans.push_back(nums[i-1]);
          i++;
          j++;
      }
        ans.push_back(nums[m-1]);
        return ans;
    }
};