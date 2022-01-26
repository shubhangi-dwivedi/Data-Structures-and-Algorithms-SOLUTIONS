//1305. All Elements in Two Binary Search Trees
//https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

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

//Method-1 (brute force)
class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        
        store_ele(res,root1);
        store_ele(res,root2);
        
        sort(res.begin(),res.end());
        return res;
    }
    
    void store_ele(vector<int> &res, TreeNode* root){
        if(!root)
            return;
         
         res.push_back(root->val);
        
        store_ele(res,root->left);
        store_ele(res,root->right);
    }
    
};