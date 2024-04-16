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
    void help(TreeNode* root, int &val, int &depth, int curr){
        if(!root || curr>depth)
            return;
        
        if(curr==depth-1){
            TreeNode* tempLeft=new TreeNode(val);
            TreeNode* tempRight=new TreeNode(val);
            tempLeft->left=root->left;
            tempRight->right=root->right;
            root->left=tempLeft;
            root->right=tempRight;
        }
        
        help(root->left, val, depth, curr+1);
        help(root->right, val, depth, curr+1);
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
           auto temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        
        help(root, val, depth, 1);
        return root;
    }
};