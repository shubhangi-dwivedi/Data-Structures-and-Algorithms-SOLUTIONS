//Topological sort
//https://practice.geeksforgeeks.org/problems/topological-sort/1/#


//Method-1 (DFS based solution)
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> ans;
	
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	   vector<bool>vis(v,0);

       //visiting every vertex
	   for(int i=0;i<v;i++)
	   if(!vis[i])
	       dfs(adj,i,vis);
	        
        //originally stack is used that's why we have to reverse the ans[]
	    reverse(ans.begin(),ans.end());
	    
	    return ans;
	}
	
	void dfs(vector<int> adj[], int src, vector<bool>& vis){
	    vis[src]=true;  //marking current vertex visited
	    
        //visiting adj. of current vertex
	    for(int i:adj[src])
	        if(!vis[i])
	            dfs(adj,i,vis);
	            
        //adding current vertex to ans[]
	   ans.push_back(src);
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends