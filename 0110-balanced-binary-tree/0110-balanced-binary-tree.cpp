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
private: int height(TreeNode* root){
    
    if(root == NULL)
        return 0;
    
    int lh = height(root -> left);
    int rh = height(root -> right);
    
    return 1 + max(lh, rh);
    
}
    
public:
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL)
            return true;
        
        int left = height(root -> left);
        int right = height(root -> right);
        
        if(abs(left - right) <= 1 && isBalanced(root->left)
        && isBalanced(root->right))
            return true;
        
        return false;
        
    }
};