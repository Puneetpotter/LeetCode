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
// class Solution {
// public:
//     TreeNode* solve(vector<int> &preorder, vector<int> &inorder,int start, int end, int &pos, map<int, int> m){
        
//         if(pos >= inorder.size() || start > end)
//             return NULL;
        
//         int element = preorder[pos++];
//         TreeNode *root = new TreeNode(element);
//         int position = m[element];
        
//         root -> left = solve(preorder, inorder, start, position - 1, pos, m);
//         root -> right = solve(preorder, inorder, position + 1, end, pos, m);
        
//         return root;
//     }
    
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
//         int pos = 0;
//         int start = 0;
//       //  int n = preorder.size();
//         int end = preorder.size() - 1;
//         map<int, int> m;
        
//         for(auto i=0; i<=end; i++)
//             m[inorder[i]] = i;
        
//         return solve(preorder, inorder, start, end, pos, m);
        
//        // return root;
//     }
// };

class Solution {
public:
    
   // Helper function to recursively build a binary tree from given preorder and inorder traversals
TreeNode* treeBuilt(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inOrderStart, int inOrderEnd, map<int, int>& mp) {
    // Base cases: check if the subtree is empty
    if (preIndex >= preorder.size() || inOrderStart > inOrderEnd)
        return NULL;

    // Create a new TreeNode with the current element from the preorder traversal
    int element = preorder[preIndex++];
    TreeNode* root = new TreeNode(element);

    // Find the position of the current element in the inorder traversal
    int position = mp[element];

    // Recursively build the left subtree with elements before the current element in inorder traversal
    root->left = treeBuilt(preorder, inorder, preIndex, inOrderStart, position - 1, mp);
    
    // Recursively build the right subtree with elements after the current element in inorder traversal
    root->right = treeBuilt(preorder, inorder, preIndex, position + 1, inOrderEnd, mp);

    // Return the current root of the subtree
    return root;
}

// Main function to build a binary tree from given preorder and inorder traversals
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    // Initialize variables
    int preIndex = 0;
    int inOrderStart = 0;
    int inOrderEnd = inorder.size() - 1;
    map<int, int> mp;

    // Create a map to store the positions of elements in the inorder traversal
    for (int i = 0; i < inorder.size(); i++) {
        mp[inorder[i]] = i;
    }

    // Call the helper function to build the tree and return the root
    return treeBuilt(preorder, inorder, preIndex, inOrderStart, inOrderEnd, mp);
}

};