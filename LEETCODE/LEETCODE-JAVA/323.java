// 323. Number of Connected Components in an Undirected Graph
// https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/

// Method-1 dfs
class Solution {
    public int countComponents(int n, int[][] edges) {
        List<List<Integer>> adj=new ArrayList<>();

        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }

        for(int[] edge: edges){
            adj.get(edge[0]).add(edge[1]);
            adj.get(edge[1]).add(edge[0]);
        }

        boolean[] vis=new boolean[n];
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                helper(adj,i,vis);
            }
        }

        return count;
    }

    private void helper(List<List<Integer>> adj, int i, boolean[] vis){
        vis[i]=true;

        for(int neighbour:adj.get(i)){
            if(!vis[neighbour]){
                helper(adj,neighbour,vis);
            }
        }
    }
}