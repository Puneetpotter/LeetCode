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
    void toInOrder(TreeNode* root, vector<int> &in){
        
        if(!root)
            return;
        
        toInOrder(root -> left, in);
        in.push_back(root -> val);
        toInOrder(root -> right, in);
        
    }
    
    TreeNode *solve(int start, int end, vector<int> &in){
        
        if(start > end)
            return NULL;
        
        int mid = (start + end)/2;
        
        TreeNode *root = new TreeNode(in[mid]);
        
        root -> left = solve(start, mid - 1, in);
        root -> right = solve(mid + 1, end, in);
        
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int> in;
        toInOrder(root, in);
        return solve(0, in.size() - 1, in);
        
    }
};