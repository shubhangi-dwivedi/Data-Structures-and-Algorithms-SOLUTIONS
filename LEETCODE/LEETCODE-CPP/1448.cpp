//1448. Count Good Nodes in Binary Tree
//https://leetcode.com/problems/count-good-nodes-in-binary-tree/

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
    int count=0;
    
    int goodNodes(TreeNode* root) {
        count_nodes(root, root->val);
        
        return count;
    }
    
    void count_nodes(TreeNode* node, int node_val){
        if(node==NULL)
            return;
        
        if(node->val >= node_val){
            count++;
            node_val=node->val;
        }
        
        count_nodes(node->left,node_val);
        count_nodes(node->right,node_val);
    }
};