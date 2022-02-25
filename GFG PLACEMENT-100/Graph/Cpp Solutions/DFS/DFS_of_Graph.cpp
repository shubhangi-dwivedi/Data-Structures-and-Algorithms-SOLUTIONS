//DFS of Graph
//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        bool vis[v];
        for(int i=0;i<v;i++)
            vis[i]=false;
        
        vector<int> res;
        dfs(v,adj,0,res,vis);   //passing 0 as source vertex
        
        return res;
    }
    
    void dfs(int v,  vector<int> adj[], int s, vector<int>& res, bool vis[]){
        
        vis[s]=true;
        res.push_back(s);
        
        for(int x:adj[s])
            if(vis[x]==false)
                dfs(v,adj,x,res,vis);
                
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends