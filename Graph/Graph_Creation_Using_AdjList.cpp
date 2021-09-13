//Adjacency list representation of Graph

#include<iostream>
#include<list>

using namespace std;

class Graph{

    int V; //vertices

    //array of list
    list<int> *l; //l is a pointer to an array in which each element of the array is a list (i.e. l is a pointer to array of list)

    public:
        Graph(int V){
            this->V=V;
            l=new list<int> [V]; //list of V size
            
        }

        //assuming it is an undirected graph
        void addEdge(int x, int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void printAdjList(){

            //itertate over all vertices
            for(int i=0;i<V;i++)
            {
                cout<<"Vertex "<<i<<" -> ";
                
                //iterating over the list
                for(int nbr:l[i]) //or, for(auto nbr:l[i])
                    cout<<nbr<<"\t";

                cout<<endl;
            }
        }
};

int main(){
    Graph g(4); //V=4
    /*
        Given graph:
            0-----1
             \   /
              \ /
               2
               |
               3
    */

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);

    g.printAdjList();
    return 0;
}