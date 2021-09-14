//Graph adj list representation using hashmap

#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class Graph{
    //adjacency list
    unordered_map<string,list<pair<string,int>>>l;


    public:
        void addEdge(string x, string y, bool bidrectionalEdge, int wt){
            l[x].push_back(make_pair(y,wt));

            if(bidrectionalEdge)
                l[y].push_back(make_pair(x,wt));
        }

        void printAdjList(){
            //iterate over all the keys in the map
            for(auto p:l) //for every pair in l
            {
                string city =p.first;
                list<pair<string,int>> nbrs=p.second;

                cout<<city<<" -> ";
                //iterting over the pairs and print all the elements
                for(auto nbr:nbrs){
                    string dest=nbr.first;
                    int dist=nbr.second;

                    cout<<dest<<","<<dist<<"\t ";
                }
                cout<<endl;
            }
        }
};

int main(){

    Graph g;

    g.addEdge("A","B",true,20); //undirected edge
    g.addEdge("B","D",true,40); //undirected edge
    g.addEdge("A","C",true,10); //undirected edge
    g.addEdge("C","D",true,40); //undirected edge
    g.addEdge("A","D",false,50); //directed edge

    g.printAdjList();
    
    return 0;
}