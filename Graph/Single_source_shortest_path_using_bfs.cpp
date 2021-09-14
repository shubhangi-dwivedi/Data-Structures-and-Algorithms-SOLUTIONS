//single source shortest path using BFS when weight of each path is one/equal (or unweighted graph)
//Distance covered by level order traversal is the shortest when weight of each path is one/equal (or unweighted graph)
//if wt. is given we use other algos.

//level of the destination node from the source node is the dist.

#include<iostream>
#include<map>
#include<queue>
#include<list>
#include<climits>

using namespace std;

template<typename T>
class Graph{

  map<T, list<T>> l;

    public:
        //assuming undirected graph
        void addEdge(int x, int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void bfs(T src){
            map<T,int> dist;
            queue<T> q;

            //all nodes will have int_max value
            //itearting over the list 
            for(auto node_pair:l){
                T node=node_pair.first;
                dist[node]=INT_MAX;
            }

            q.push(src);
            dist[src]=0; //this means source node have dist. 0

            while(!q.empty()){
                T node =q.front();
                q.pop();

                for(auto nbr: l[node]){
                    if(dist[nbr]==INT_MAX){
                        q.push(nbr);
                        dist[nbr]=dist[node]+1; //dist. of current node is euqal to dist. of parent+1 
                    }
                }
            }

            for(auto node_pair:l){
                T node=node_pair.first;
                int d=dist[node];
                cout<<"Node "<<node<<" dist. from the node "<<d<<endl;
            }
        }
};

int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.bfs(0);

    return 0;
}