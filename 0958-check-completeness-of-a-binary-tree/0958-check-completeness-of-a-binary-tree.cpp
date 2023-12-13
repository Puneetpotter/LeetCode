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
    int countNodes(TreeNode* root, int count){
        
        if(root==NULL)
            return 0;
        
        int ans = 1 + countNodes(root->left, count) + countNodes(root->right, count);
        return ans;
        
    }
    
    bool isComplete(TreeNode* root, int i, int count){
        
        if(root==NULL)
            return true;
        
        if(i>=count)
            return false;
        
        return isComplete(root->left, 2*i + 1, count) && isComplete(root->right, 2*i + 2, count);
        
    }
    
    bool isCompleteTree(TreeNode* root) {
        
        int index=0;
        int count=0;
        int nodesCount=countNodes(root, count);
        return isComplete(root, index, nodesCount);
        
    }
};