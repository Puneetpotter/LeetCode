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
    void smallestWord(TreeNode* root, string &ans, string curr){
        if(!root)
            return;
        
        curr=char(root->val+'a')+curr;
        
        if(!root->left and !root->right){
            if(ans=="" || curr<ans)
                ans=curr;
        }
        
        if(root->left)
            smallestWord(root->left, ans, curr);
        if(root->right)
            smallestWord(root->right, ans, curr);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        string ans="";
        smallestWord(root, ans, "");
        return ans;
    }
};