//Graph Adjacency List Representation

//Here we have used arraylist of arraylist.. we can alsi use list of arraylist..but, arraylist of arraylist gives us cache friendliness
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
import java.util.*;

class Graph_Adjacency_List_Representation{
    static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v){
        adj.get(u).add(v);
        adj.get(v).add(u);
    }

    static void printEdge(ArrayList<ArrayList<Integer>> adj){
        for(int i=0;i<adj.size();i++){
            System.out.print(i+" ");
            for(int j=0;j<adj.get(i).size();j++)
                System.out.print(adj.get(i).get(j)+" ");
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int V=4;
        ArrayList<ArrayList<Integer>> adj=new ArrayList<ArrayList<Integer>>(V); //this means our main arraylist is created of capacity V, but it is currently empty(size is 0)

        //this adds arraylist to arraylist i.e. arraylist of size 4 is created.. nd content is empty
        for(int i=0;i<V;i++)
            adj.add(new ArrayList<Integer>());

        addEdge(adj,0,1);
        addEdge(adj,0,2);
        addEdge(adj,1,2);
        addEdge(adj,1,3);

        System.out.println("The adj. list representation for given graph is : ");
        printEdge(adj);
    }
}