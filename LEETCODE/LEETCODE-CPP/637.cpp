//637. Average of Levels in Binary Tree
//https://leetcode.com/problems/average-of-levels-in-binary-tree/

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

//method -1 (level order traversal)
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*>q;
        
        q.push(root);
        while(!q.empty()){
            int level_size=q.size();
            double temp=0;
            
            for(int i=0;i<level_size;i++){
                TreeNode* node= q.front();
                q.pop();
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                temp+=node->val;
            }
            ans.push_back(temp/level_size);
        }
        
        return ans;
    }
};