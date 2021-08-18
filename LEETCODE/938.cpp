//938. Range Sum of BST

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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        
        return tot_sum(root,low,high,sum);
    }
    
    int tot_sum(TreeNode* root, int low, int high,int &sum){
    if(root){
        if(root->val>=low && root->val<=high)
            sum+=root->val;
        
        tot_sum(root->left,low,high,sum);
        tot_sum(root->right,low,high,sum);
    }
    return sum;
}
};

