/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(target -> val == cloned -> val)
            return cloned;
        
        queue<TreeNode*> q;
        q.push(cloned);
        
        while(!q.empty()){
            
            int n = q.size();
            
            while(n--){
                
                TreeNode* temp = q.front();
                q.pop();
                
                
                if(temp -> left){
                    
                    if(temp -> left -> val == target -> val)
                    return temp -> left;
                    q.push(temp -> left);
                }
                
                if(temp -> right){
                    
                    if(temp -> right -> val == target -> val)
                    return temp -> right;
                    q.push(temp -> right);
                    
                }
                
            }
            
        }
        return cloned;
    }
};