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
    int deepestLeavesSum(TreeNode* root) {
        
        if(root -> left == NULL and root -> right == NULL)
            return root -> val;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int sum = 0;
        
        while(!q.empty()){
            
            int s1 = 0;
            int n = q.size();
            
            while(n--){
                
               TreeNode* temp = q.front();
               q.pop();
            
               if(temp -> left){
                
                   q.push(temp -> left);
                   s1 += temp -> left -> val;
                
               }
            
               if(temp -> right){
                
                   q.push(temp -> right);
                   s1 += temp -> right -> val;
                
               } 
                
            }
            
            if(s1 > 0)
                sum = s1;
        }
        
        return sum;
    }
};