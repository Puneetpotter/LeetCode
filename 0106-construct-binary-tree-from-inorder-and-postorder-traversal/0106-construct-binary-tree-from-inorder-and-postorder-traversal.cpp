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
       // Helper function to recursively build a binary tree from given preorder and inorder traversals
TreeNode* treeBuilt(vector<int>& postorder, vector<int>& inorder, int& postIndex, int inOrderStart, int inOrderEnd, map<int, int>& mp) {
    // Base cases: check if the subtree is empty
    if (postIndex < 0 || inOrderStart > inOrderEnd)
        return NULL;

    // Create a new TreeNode with the current element from the preorder traversal
    int element = postorder[postIndex--];
    TreeNode* root = new TreeNode(element);

    // Find the position of the current element in the inorder traversal
    int position = mp[element];
    
        // Recursively build the right subtree with elements after the current element in inorder traversal
    root->right = treeBuilt(postorder, inorder, postIndex, position + 1, inOrderEnd, mp);

    // Recursively build the left subtree with elements before the current element in inorder traversal
    root->left = treeBuilt(postorder, inorder, postIndex, inOrderStart, position - 1, mp);
    


    // Return the current root of the subtree
    return root;
}
    
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
    int postIndex = postorder.size() - 1;
    int inOrderStart = 0;
    int inOrderEnd = inorder.size() - 1;
    map<int, int> mp;

    // Create a map to store the positions of elements in the inorder traversal
    for (int i = 0; i < inorder.size(); i++) {
        mp[inorder[i]] = i;
    }

    // Call the helper function to build the tree and return the root
    return treeBuilt(postorder, inorder, postIndex, inOrderStart, inOrderEnd, mp);
        
    }
};