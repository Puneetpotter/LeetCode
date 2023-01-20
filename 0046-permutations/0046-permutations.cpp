class Solution {
private:
    void solve(int index, vector <int> nums, vector <vector<int>>& ans){
        
    if(index >= nums.size()){
        
        ans.push_back(nums);
        return;
        
    }    
        
        for(int i = index; i < nums.size(); i++){
            
            swap(nums[i], nums[index]);
            solve(index + 1, nums, ans);
            swap(nums[i], nums[index]);
            
        }
        
    }
    
    
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        int index = 0;
        
        vector <vector<int>> ans;
        
        solve(index, nums, ans);
        
        return ans;
        
    }
};