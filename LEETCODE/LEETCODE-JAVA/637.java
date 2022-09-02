//637. Average of Levels in Binary Tree
//https://leetcode.com/problems/average-of-levels-in-binary-tree/

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
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> ans = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        
        q.offer(root);
        
        while(!q.isEmpty()){
            int level_size=q.size();
            Double temp=0.0;
            
            for(int i=0;i<level_size;i++){
                TreeNode node=q.poll();
                
                if(node.left!=null)
                    q.offer(node.left);
                if(node.right!=null)
                    q.offer(node.right);
                
                temp+=node.val;
            }
            
            ans.add(temp/level_size);
        }
        
        return ans;
    }
}