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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        queue<TreeNode*> nodes;
        nodes.push(root);
        
        if(root == NULL)
            return ans;
        
        ans.push_back({root -> val});
        
        while(!nodes.empty()){
            
            int size = nodes.size();
            vector<int> level;
            
            while(size--){
            
            TreeNode* temp = nodes.front();
            nodes.pop();
            
            if(temp -> left){
                nodes.push(temp -> left);
                level.push_back(temp -> left -> val);
            }
            
            if(temp -> right){
                nodes.push(temp -> right);
                level.push_back(temp -> right -> val);
            }
            
            }
            
            if(!level.empty())
                ans.push_back(level);
        }
        
        return ans;
    }
};