//Detect cycle in a directed graph 
//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/#

//solved using DFS

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        bool vis[v], rec_stk[v];
        for(int i=0;i<v;i++){
            vis[i]=false;
            rec_stk[i]=false;
        }
        
        for(int i=0;i<v;i++)
            if(vis[i]==false)
                if(dfsRec(adj,i,vis,rec_stk))
                    return true;
                    
        return false;
    }
    
    bool dfsRec(vector<int> adj[], int s, bool vis[], bool rec_stk[]){
        vis[s]=true;
        rec_stk[s]=true;
        
        for(int u: adj[s]){
            if(vis[u]==false && dfsRec(adj,u,vis,rec_stk))
                return true;
            else if(rec_stk[u]==true)
                return true;
        }
        
        rec_stk[s]=false;
        
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends