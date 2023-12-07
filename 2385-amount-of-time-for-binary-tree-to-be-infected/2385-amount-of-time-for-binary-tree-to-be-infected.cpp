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
private:
    int solve(map<TreeNode *, TreeNode *> m, TreeNode *res){
    
        map<TreeNode *, bool> burnt;
        queue<TreeNode *> q;
        
        q.push(res);
        burnt[res] = true;
        int ans = 0;
        
        while(!q.empty()){
            
            bool flag = false;
            int n = q.size();
            
            for(int i = 0; i < n; i++){
                
                TreeNode *front = q.front();
                q.pop();
                
                if(front -> left and !burnt[front -> left]){
                    q.push(front -> left);
                    burnt[front -> left] = true;
                    flag = true;
                }
                
                if(front -> right and !burnt[front -> right]){
                    q.push(front -> right);
                    burnt[front -> right] = true;
                    flag = true;
                }
                
                if(m[front] and !burnt[m[front]]){
                    burnt[m[front]] = true;
                    q.push(m[front]);
                    flag = true;
                }
            }
            
            if(flag == true)
                ans ++;
            
        }
        
        return ans;
    }
    
public:
    int amountOfTime(TreeNode* root, int start) {
        
        queue<TreeNode *> q;
        TreeNode *res = NULL;
        map<TreeNode *, TreeNode *> m;
        
        m[root] = NULL;
        q.push(root);
        
        while(!q.empty()){
            
            TreeNode *front = q.front();
            q.pop();
            
            if(front -> val == start)
                res = front;
            
            if(front -> left){
                m[front -> left] = front;
                q.push(front -> left);
            }
            
            if(front -> right){
                m[front -> right] = front;
                q.push(front -> right);
            }
        }
        
        return solve(m, res);
    }
};