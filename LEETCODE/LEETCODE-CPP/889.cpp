//889. Construct Binary Tree from Preorder and Postorder Traversal
//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal

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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int idx=0;
        int n=preorder.size();

        return helper(preorder, postorder, idx, 0, n-1);
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& postorder, int& idx, int start, int end){
        if(idx>=preorder.size() || start>end){
            return nullptr;
        }

        TreeNode* root=new TreeNode(preorder[idx++]);
        if(start==end){
            return root;
        }

        int i=start;
        while(i<=end && postorder[i]!=preorder[idx]){
            i++;
        }

        if(i<=end){
            root->left=helper(preorder, postorder, idx, start, i);
            root->right=helper(preorder, postorder, idx, i+1, end-1);
        }

        return root;
    }
};