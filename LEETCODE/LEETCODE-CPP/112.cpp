//112. Path Sum
//https://leetcode.com/problems/path-sum/

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return calc(root, targetSum);
    }
    
    bool calc(TreeNode* root, int ts){
        if(!root)
            return false;
        
        ts-=root->val;

        if(!root->left && !root->right){
            if(ts==0)
                return true;
            else 
                return false;
        }

        return (calc(root->left, ts) || calc(root->right, ts));
    }
};
hh