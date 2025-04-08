// 323. Number of Connected Components in an Undirected Graph
// https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/

// Method-1 dfs
class Solution
{
public:
    int countComponents(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj(n);

        for (auto &edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int count = 0;
        vector<bool> vis(n);
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                count++;
                helper(adj, vis, i);
            }
        }

        return count;
    }

    void helper(vector<vector<int>> &adj, vector<bool> &vis, int node)
    {
        if (vis[node] == true)
        {
            return;
        }

        vis[node] = true;
        for (int neighbour : adj[node])
        {
            helper(adj, vis, neighbour);
        }
    }
};