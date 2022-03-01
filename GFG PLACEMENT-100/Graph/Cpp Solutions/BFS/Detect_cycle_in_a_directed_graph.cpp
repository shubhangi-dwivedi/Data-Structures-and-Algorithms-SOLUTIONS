// { Driver Code Starts
//Detect cycle in a directed graph
//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.

    //Method-1 (Kahn's based BFS algorithm)
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<int> indegree(v,0);
	    
	    //assigning indegrees 
	    for(int i=0;i<v;i++)
	        for(int u:adj[i])
	            indegree[u]++;
	            
	    return bfs(adj, indegree, v);
	   
    }
	   
	   bool bfs(vector<int> adj[], vector<int>& indegree, int v){
	       
	       queue<int> q;
	       
	       for(int i=0;i<v;i++)
	            if(indegree[i]==0)
	                q.push(i);
	   
	       int count=0;
	       
	       while(!q.empty()){
	           int u=q.front();
	           q.pop();
	           
	           count++;
	           
	           for(int x:adj[u]){
	               indegree[x]--;
	               if(indegree[x]==0)
	                    q.push(x);
	           }
	           
	       }
	       
	       if(count!=v)
	            return true;
	        
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