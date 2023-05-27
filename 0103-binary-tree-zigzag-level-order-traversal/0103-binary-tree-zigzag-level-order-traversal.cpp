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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(root == NULL)
            return ans;
        
        queue<TreeNode*> q;
        bool seq = false;
        
        q.push(root);
        ans.push_back({root -> val});
        
        while(!q.empty()){
            
            int n = q.size();
            vector<int> level;
            
            while(n--){
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp -> left){
                    
                    level.push_back(temp -> left -> val);
                    q.push(temp -> left);
                    
                }
                
                if(temp -> right){
                    
                    level.push_back(temp -> right -> val);
                    q.push(temp -> right);
                    
                }
                
            }
            
            if(level.size() and seq == true)
                ans.push_back(level);
            
            else if(level.size() and seq == false){
                reverse(level.begin(), level.end());
                ans.push_back(level);
            }
            
            seq = !seq;
                
        }
        
        return ans;
    }
};