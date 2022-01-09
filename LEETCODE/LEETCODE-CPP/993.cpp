//993. Cousins in Binary Tree


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
    
    int treeHeight(TreeNode* curr, int &parent, int value, int height)
    {
        if(!curr)
            return 0;
        
        if(curr->val==value)
            return height;
        
        parent=curr->val;
        
        int left=treeHeight(curr->left,parent,value,height+1);
        if(left)
            return left;
        
        parent=curr->val;
        int right=treeHeight(curr->right,parent,value,height+1);
        return right;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(root->val==x || root->val==y)
            return false;
        
        int xparent=-1;
        int xheight=treeHeight(root,xparent,x,0);
        
        int yparent=-1;
        int yheight=treeHeight(root,yparent,y,0);
        
        if(xparent!=yparent && xheight==yheight)
            return true;
        
        return false;
    }
};