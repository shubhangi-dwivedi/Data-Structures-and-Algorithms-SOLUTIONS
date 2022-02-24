//Graph Adjacency List Representation

//Here we have used Array of vectors.... we can also use vector of vectors (which will be helpful in case of adding more vertices at runtime)
//Code for undirected graph
/*
    graph: 
    0------1-----3
     \    /
      \  /
        2
*/

/*
    Adj. list:
    0 -> 1 -> 2
    1 -> 0 -> 2 -> 3
    2 -> 0 -> 1
    3 -> 1
*/

//code
#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printEdge(vector<int> adj[], int v){
    for(int i=0;i<v;i++){
        cout<<i<<" ";
        for(auto x:adj[i])
            cout<<x<<" ";
        cout<<endl;
    }
}

int main(){
    int v=4; //for 4 vertices
    vector<int> adj[4]; //array of vectors (array is of size 4)

    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

    cout<<"The adj. list representation for given graph is : "<<endl;
    printEdge(adj,v);

}