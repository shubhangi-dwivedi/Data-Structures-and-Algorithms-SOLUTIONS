//144. Binary Tree Preorder Traversal

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        result(root,res);
        
        return res;
    }
    
    void result(TreeNode* root, vector<int>& res)
    {
        if(!root)
            return;
        
        res.push_back(root->val);
        result(root->left,res);
        result(root->right,res);
    }
};