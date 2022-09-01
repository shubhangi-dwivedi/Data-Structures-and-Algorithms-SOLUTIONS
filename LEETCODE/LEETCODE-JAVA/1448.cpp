//1448. Count Good Nodes in Binary Tree
//https://leetcode.com/problems/count-good-nodes-in-binary-tree/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int count=0; 
    
    public int goodNodes(TreeNode root) {
        count_nodes(root, root.val);
        return count;
    }
    
    public void count_nodes(TreeNode node, int prev_val){
        if(node==null)
            return;
        
        if(node.val >= prev_val){
            count++;
            prev_val=node.val;
        }
        
        count_nodes(node.left, prev_val);
        count_nodes(node.right, prev_val);
    }
}