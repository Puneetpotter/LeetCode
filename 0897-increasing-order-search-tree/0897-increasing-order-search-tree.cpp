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
    void getNodes(TreeNode* root, vector<int> &nodes){
        if(root ==NULL)
            return;
        nodes.push_back(root->val);
        getNodes(root->left, nodes);
        getNodes(root->right, nodes);
    }
    
    void getInOrder(TreeNode* &ans, vector<int> &nodes){
        if(nodes.empty())
            return;
        TreeNode* temp= new TreeNode(nodes[0]);
        ans = temp;
        for(int i=1; i<nodes.size(); i++){
            temp->right=new TreeNode(nodes[i]);
            temp=temp->right;
        }
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> nodes;
        TreeNode* ans;
        getNodes(root, nodes);
        sort(nodes.begin(), nodes.end());
        getInOrder(ans, nodes);
        return ans;
    }
};