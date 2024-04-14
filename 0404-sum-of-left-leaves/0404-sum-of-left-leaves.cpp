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
    int calSum(TreeNode* root, int &sum){
        if(root->left){
            if((root->left->left==NULL and root->left->right==NULL)){
                sum+=root->left->val;
            }
        }
            
        
        if(root->left)
            calSum(root->left, sum);
        if(root->right)
            calSum(root->right, sum);
        return sum;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(root->left==NULL and root->right==NULL)
            return sum;
        
        return calSum(root, sum);
    }
};