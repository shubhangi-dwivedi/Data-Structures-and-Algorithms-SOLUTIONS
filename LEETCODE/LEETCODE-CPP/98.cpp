//98. Validate Binary Search Tree
//https://leetcode.com/problems/validate-binary-search-tree/

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


//method-1
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



//method-2
class Solution {
public:
    bool validate(TreeNode* root,long long  lower,long long upper)
    {
        if(!root)
            return true;
        if(root->val<=lower || root->val >=upper)
            return false;
        return validate(root->left,lower,root->val) && validate(root->right,root->val,upper);
        
    }
    bool isValidBST(TreeNode* root) {
        long long upper=LLONG_MAX;
        long long  lower=LLONG_MIN;

        
        return validate(root,lower,upper);
        
    }
};