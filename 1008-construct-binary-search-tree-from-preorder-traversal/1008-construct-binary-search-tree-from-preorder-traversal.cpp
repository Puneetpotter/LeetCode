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
public:
    TreeNode *solve(int mini, int maxi, vector<int>& preorder, int& i){
        
        if(i >= preorder.size())
            return NULL;
        
        if(preorder[i] > maxi || preorder[i] < mini)
            return NULL;
        
        TreeNode* root = new TreeNode(preorder[i++]);
        
        root -> left = solve(mini, root -> val, preorder, i);
        root -> right = solve(root -> val, maxi, preorder, i);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int mini = INT_MIN;
        int maxi = INT_MAX;
        int i = 0;
        
        return solve(mini, maxi, preorder, i);
    }
};