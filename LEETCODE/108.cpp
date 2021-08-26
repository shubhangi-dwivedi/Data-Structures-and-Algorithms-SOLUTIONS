//108. Convert Sorted Array to Binary Search Tree

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==1)
            return new TreeNode(nums[0]);
        
        return covertToTree(nums,0,n-1);
    }
    
    TreeNode* covertToTree( vector<int> nums,int l, int h){
        if(l<=h){
            int mid=l+(h-l)/2;
            
            TreeNode* root= new TreeNode(nums[mid]);
            
            root->left=covertToTree(nums,l,mid-1);
            root->right=covertToTree(nums,mid+1,h);
            
            return root;
        }
        return NULL;
    }
};