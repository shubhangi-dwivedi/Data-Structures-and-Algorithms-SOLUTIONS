//Detect cycle in an undirected graph
//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        vector<bool> vis(v);
        for(int i=0;i<v;i++)
            vis[i]=false;
            
        
        for(int i=0;i<v;i++){
            if(dfs(adj,i,vis,-1)==true)
                return true;
        }
        
        return false;
        
    }
    
    bool dfs(vector<int> adj[], int s, vector<bool> vis, int parent){
        vis[s]=true;
        
        for(int x: adj[s]){
            if(vis[x]==false){
                if(dfs(adj,x,vis,s)==true)
                    return true;
            }
            else if(x!=parent)
                return true;
        }
                
        return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends