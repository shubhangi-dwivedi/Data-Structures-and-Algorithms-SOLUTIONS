//113. Path Sum II
//https://leetcode.com/problems/path-sum-ii/

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
    vector<vector<int>> res;
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        
        calc(root,targetSum,temp);
        return res;
    }
    
    void calc(TreeNode* root, int ts, vector<int> temp){
        if(!root)
            return;
        
        temp.push_back(root->val);
        ts-=root->val;
        
        if(!root->left && !root->righ){
            if(ts==0)
                res.push_back(temp);
        }
        else{
            calc(root->left, ts, temp);
            calc(root->right, ts, temp);
        }
         
        temp.pop_back();
    }
};