//Implementing Dijkstra Algorithm 
//https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1/


//Method-1 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int src)
    {
        // Code here
        vector<int> dist(v, INT_MAX);
        vector<bool> fin(v, false);
        
        dist[src]=0;
        for(int count=0;count<v-1;count++){
            int u=-1;
            
            for(int i=0;i<v;i++)
                if(!fin[i] && (u==-1 || dist[i]<dist[u]))
                    u=i;
            
            fin[u]=true;    //finalize
            
            for(auto y : adj[u]){
                int curr_dist=dist[u]+y[1];
                
                if(curr_dist < dist[y[0]]){
                    dist[y[0]]=curr_dist;
                }
            }
        }
        
        return dist;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}
  // } Driver Code Ends


//Method-2 (using priority queue)
vector <int> dijkstra(int v, vector<vector<int>> adj[], int src)
    {
        // Code here
        vector<int> dist_to(v, INT_MAX);
        priority_queue<pair<int,int>>pq;    //distnace & vertex pair
        
        pq.push({0,src});
        dist_to[src]=0;
        
        while(pq.size()){
            auto top=pq.top();
            pq.pop();
            
            int dist=top.first;
            int u=top.second;
            
            for(auto &y : adj[u]){
                int curr_dist= dist+y[1];
                
                if(curr_dist < dist_to[y[0]]){
                    dist_to[y[0]]=curr_dist;
                    pq.push({curr_dist,y[0]}); //pushing distance & vertex
                }
            }
        }
        
        return dist_to;
    }