//543. Diameter of Binary Tree

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
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        height(root,res);
        return res;
    }
    
     int height(TreeNode* root,int &res){
        if(root){
            int left=height(root->left,res);
            int right=height(root->right,res);
            
            res=max(res,left+right);
            
            return max(left,right)+1;
        }
        else
             return 0;
    }
};