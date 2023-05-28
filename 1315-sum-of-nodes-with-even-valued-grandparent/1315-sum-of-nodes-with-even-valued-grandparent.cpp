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
    int sumEvenGrandparent(TreeNode* root) {
        
        int sum = 0;
        
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        
        q1.push(root);
        
        if(root -> val % 2 == 0){
            
            if(root -> left)
                q2.push(root -> left);
            
            if(root -> right)
                q2.push(root -> right);
            
        }
        
        while(!q1.empty()){
            
            int n = q1.size();
            
            while(n--){
                
                TreeNode* temp = q1.front();
                q1.pop();
                
                if(temp -> left){
                    
                    if(temp -> left -> val % 2 == 0){
                        
                        if(temp -> left -> left)
                            q2.push(temp -> left -> left);
                        
                        if(temp -> left -> right)
                            q2.push(temp -> left -> right);
                        
                    }
                    
                    q1.push(temp -> left);
                    
                }
                
                if(temp -> right){
                    
                    if(temp -> right -> val % 2 == 0){
                        
                        if(temp -> right -> left)
                            q2.push(temp -> right -> left);
                        
                        if(temp -> right -> right)
                            q2.push(temp -> right -> right);
                        
                    }
                    
                    q1.push(temp -> right);
                    
                }
                
            }
            
        }
        
        while(!q2.empty()){
            
            if(q2.front() -> left)
                sum += q2.front() -> left -> val;
            
            if(q2.front() -> right)
                sum += q2.front() -> right -> val;
            
            cout << q2.front() -> val << endl;
            
            q2.pop();
            
        }
        
        return sum;
    }
};