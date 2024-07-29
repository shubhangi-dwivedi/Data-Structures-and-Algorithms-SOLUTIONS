//671. Second Minimum Node In a Binary Tree
//https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/description/

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
    int findSecondMinimumValue(TreeNode* root) {
        if(root->left == NULL or root->right == NULL) return -1;
        int smallest = root->val;
        int secondSmallest = INT_MAX;
        bool update = false;
        
        help(root, smallest, secondSmallest, update);
        if(secondSmallest == smallest or !update) return -1;
        return secondSmallest;
    }
    
    void help(TreeNode*root, int smallest, int &secondSmallest, bool &update){
        if(root == NULL) return;
        if(root->val <= secondSmallest and root->val != smallest){
            secondSmallest = root->val;
            update = true;
        }
        help(root->left, smallest, secondSmallest, update);       
        help(root->right, smallest, secondSmallest, update);
    }
};