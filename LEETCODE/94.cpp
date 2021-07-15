//94. Binary Tree Inorder Traversal


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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        
        result(root,res);
        
        return res;
    }
    
    void result(TreeNode* root,vector<int>& res)
    {
        if(!root)
            return;
        
        result(root->left,res);
        res.push_back(root->val);
        result(root->right,res);
    }
};