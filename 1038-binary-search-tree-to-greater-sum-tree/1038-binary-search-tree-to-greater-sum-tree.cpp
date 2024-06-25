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
    void getGst(TreeNode* root,  int &sum){
        if(root == NULL)
            return;
        
        getGst(root->left, sum);
        sum-=root->val;
        root->val=sum+root->val;
        getGst(root->right, sum);
        
    }
    
    void getSum(TreeNode* root, int &sum){
        if(root == NULL)
            return;
        
        sum+=root->val;
        getSum(root->left, sum);
        getSum(root->right, sum);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        getSum(root, sum);
        getGst(root, sum);
        return root;
    }
};