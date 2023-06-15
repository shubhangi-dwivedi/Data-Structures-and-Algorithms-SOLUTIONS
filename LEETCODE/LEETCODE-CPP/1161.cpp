//1161. Maximum Level Sum of a Binary Tree
//https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/

//Method -1 (level-by-level traversing using queue)
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
        int maxLevelSum(TreeNode* root) {
            int maxsum=INT_MIN, minLvl=-1, lvl=0;
            queue<TreeNode*>q;
    
            q.push(root);   //storing root value inititally in queue
            while(!q.empty()){
                lvl++; //counting levels
    
                int temp=0;
                int n=q.size(); //size of queue to use in for loop 
    
                //calulating sum of node values for current level
                for(int i=0;i<n;i++){
                    TreeNode* node=q.front(); //storing first value of queue in node
                    q.pop(); //deleting first element from queue after storing in node
    
                    temp+=node->val;  //adding node values in temp
    
                    //storing node's child in queue if any
                    if(node->left)
                        q.push(node->left);
                    if(node->right)
                        q.push(node->right);
                }
    
                //updating maxsum if temp (sum of a level) is greater than maxsum
                //also updating the minLvl
                if(temp>maxsum){
                        maxsum=temp;
                        minLvl=lvl;
                    }
            }
    
            return minLvl;
        }
    };