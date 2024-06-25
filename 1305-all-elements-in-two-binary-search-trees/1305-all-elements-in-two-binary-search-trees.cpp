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
    void getNodes(TreeNode* root, vector<int> &ans){
        if(root == NULL)
            return;
        
        ans.push_back(root->val);
        getNodes(root->left, ans);
        getNodes(root->right, ans);
    } 
        
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        getNodes(root1, ans);
        getNodes(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};