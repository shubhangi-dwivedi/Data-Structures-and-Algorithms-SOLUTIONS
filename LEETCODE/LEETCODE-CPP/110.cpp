//110. Balanced Binary Tree
//https://leetcode.com/problems/balanced-binary-tree/

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
    bool isBalanced(TreeNode* root) {
        int leftHeight=0, rightHeight=0;
        
        if(root==NULL)
            return true;

        leftHeight=helper(root->left);
        rightHeight=helper(root->right);

        bool flag=abs(leftHeight-rightHeight)<=1;
        
        bool leftAns= isBalanced(root->left);
        bool rightAns= isBalanced(root->right);
        return flag&&leftAns&&rightAns;        
    }

    int helper(TreeNode* root){
        if(root==NULL)
            return 0;

        int lh = helper(root->left);
        int rh = helper(root->right);

        int maxHeight = max(lh, rh);
        
        return maxHeight + 1;
    }
};