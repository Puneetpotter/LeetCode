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
    void solve(TreeNode* root, string s, string sign, vector<string> &ans){
        
        if(!root)
            return;
        string t = to_string(root -> val);
        s += t;
        
        if(!root -> left and !root -> right)
            ans.push_back(s);
        
        s += sign;
        
        solve(root -> left, s, sign, ans);
        solve(root -> right, s, sign, ans);
        
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
        string s = "";
        string sign = "->";
        vector<string> ans;
        
        solve(root, s, sign, ans);
        
        return ans;
    }
};