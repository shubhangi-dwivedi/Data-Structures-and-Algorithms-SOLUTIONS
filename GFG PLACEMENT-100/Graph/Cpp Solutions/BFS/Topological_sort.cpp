//Topological sort
//https://practice.geeksforgeeks.org/problems/topological-sort/1/#


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> ans;


    //Method-1 (Kahn's based BFS algorithm)
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indegree(v,0);
	    
	    //assigning indegrees 
	    for(int i=0;i<v;i++)
	        for(int u:adj[i])
	            indegree[u]++;
	    
	    bfs(adj,indegree,v);
	    
	    return ans;
	}
	
	void bfs(vector<int> adj[], vector<int>& indegree, int v){
	    
	    queue<int> q;
	    
	    //storing 0 degree vertices in the q
	    for(int i=0;i<v;i++)
	        if(indegree[i]==0)
	            q.push(i);
	            
	    while(!q.empty()){
	        int u=q.front();
	        q.pop();
	        ans.push_back(u);
	        
	        for(auto x: adj[u]){
	            if(indegree[x]==0)
	                continue;
	                
	            indegree[x]--;
	            if(indegree[x]==0)
	                q.push(x);
	        }
	    }
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