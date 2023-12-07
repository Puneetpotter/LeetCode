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
    bool solve(TreeNode *root, long min, long max){
        
        if(root == NULL)
            return true;
        
        if(root -> val <= min || root -> val >= max)
            return false;
        
        return solve(root -> left, min, root -> val) && solve(root -> right, root -> val, max);
        
    }
    
public:
    bool isValidBST(TreeNode* root) {
        
        bool ans =  solve(root, LONG_MIN, LONG_MAX);
        return ans;
        
    }
};