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
    void solve(TreeNode* root, int temp, int &sum){
        
        if(root == NULL){
            return ;
        }
        
        if(!root -> left and !root -> right){
            temp = temp * 10 + root -> val;
            sum += temp;
            return ;
        }
        
        temp = temp * 10 + root -> val;
        
        solve(root -> left, temp, sum);
        solve(root -> right, temp, sum);
        
    }
    
public:
    int sumNumbers(TreeNode* root) {
        
        int temp = 0;
        int sum = 0;
        
        solve(root, temp, sum);
        
        return sum;
    }
};