/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void solve(TreeNode* root, vector<vector<int>> &ans, int targetSum, vector<int> path){
        
        if(!root)
            return;
        
        path.push_back(root -> val);
        
        solve(root -> left, ans, targetSum, path);
        solve(root -> right, ans, targetSum, path);
        
        if(!root -> left and !root -> right){
            
            if(accumulate(path.begin(), path.end(), 0) == targetSum)
                ans.push_back(path);
            
        }
        
        
        
    }
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        vector<int> path;
        solve(root, ans, targetSum, path);
        
        return ans;
    }
};