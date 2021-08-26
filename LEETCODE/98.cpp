//98. Validate Binary Search Tree

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
    bool isValidBST(TreeNode* root) {
        
        vector<int> res;
        checkBST(root,res);
        
        for(int i=1;i<res.size();i++){
            if(res[i]<=res[i-1])
                return false;
        }
        
        return true;
        
    }
    
    void checkBST(TreeNode * root,vector<int> &res){
        if(!root)
            return;
        
        checkBST(root->left,res);
        res.push_back(root->val);
        checkBST(root->right,res);
    }
};