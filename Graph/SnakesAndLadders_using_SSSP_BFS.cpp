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
        }

        int bfs(T src, T dest){
            map<T,int> dist;
            map<T,T> parent;
            queue<T> q;

            //all nodes will have int_max value
            //itearting over the list 
            for(auto node_pair:l){
                T node=node_pair.first;
                dist[node]=INT_MAX;
            }

            q.push(src);
            dist[src]=0; //this means source node have dist. 0
            parent[src]=src;

            while(!q.empty()){
                T node =q.front();
                q.pop();

                for(auto nbr: l[node]){
                    if(dist[nbr]==INT_MAX){
                        q.push(nbr);
                        dist[nbr]=dist[node]+1; //dist. of current node is euqal to dist. of parent+1 
                        parent[nbr]=node;
                    }
                }
            }

            //prints dist. to every node
            //in output there will be some path having large no. which indicate that those nodes are not reachable or at those pts. were we can stand like ladders/snakes 
            /*
            for(auto node_pair:l){
                T node=node_pair.first;
                int d=dist[node];
                cout<<"Node "<<node<<" dist. from the node "<<d<<endl;
            }
            */

            //printing the shortest path from dest. to source
            T temp=dest;
            while (temp!=src){
                cout<<temp<<" <-- ";
                temp=parent[temp];
            }
            cout<<src<<endl;
            

            //prints min. no. of moves requires from src to dest.
            return dist[dest];
        }
};

int main(){

    int board[50]={0};

    //snakes and ladders
    board[2]=13; //2+3=15
    board[5]=2;  //5+2=7
    board[9]=18; //9+18=27
    board[18]=11; //18+11=29
    board[17]=-13; //17-13=4
    board[20]=-14; //20-14=6
    board[24]=-8; //24-8=16
    board[25]=10; //25+10=35
    board[32]=-2; //32-2=30
    board[34]=-22; //34-22=12

    //add all edges to the graph
    Graph<int> g;
    for(int i=0;i<=36;i++){
        for(int dice=1;dice<=6;dice++){
            int j=i+dice;
            j+=board[j];

            if(j<=36){
                g.addEdge(i,j);
            }
        }
    }

    //this will tell the graph that there is a node 36 which we have to that consider
    g.addEdge(36,36); //we have to write it separately bcz when i=36,j will atleast be 37 which is not possible in this given board game 

    cout<<g.bfs(0,36); //0 is source, 36 is destination

}