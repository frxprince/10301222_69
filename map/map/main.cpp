#include<iostream>
#include<climits>
using namespace std;

// this method returns a minimum distance for the
// vertex which is not included in Tset.
string Name[]={"A","B","C","D","E","F","G","H","I","J","K"};
int minimumDist(int dist[], bool Tset[])
{
    int min=INT_MAX,index;

    for(int i=0;i<11;i++)
    {
        if(Tset[i]==false && dist[i]<=min)
        {
            min=dist[i];
            index=i;
        }
    }
    return index;
}

void Dijkstra(int graph[11][11],int src,int dst) // adjacency matrix used is 6x6
{
    int dist[11]; // integer array to calculate minimum distance for each node.
    bool Tset[11];// boolean array to mark visted/unvisted for each node.
    int prev[11];

    // set the nodes with infinity distance
    // except for the initial node and mark
    // them unvisited.
    for(int i = 0; i<11; i++)
    {
        dist[i] = INT_MAX;
        Tset[i] = false;
    }

    dist[src] = 0;   // Source vertex distance is set to zero.
    prev[src]=src;
    for(int i = 0; i<11; i++)
    {
        int m=minimumDist(dist,Tset); // vertex not yet included.
        Tset[m]=true;// m with minimum distance included in Tset.
        for(int i = 0; i<11; i++)
        {
            // Updating the minimum distance for the particular node.
            if(!Tset[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
            {
                dist[i]=dist[m]+graph[m][i];
                prev[i]=m;
            }

        }
    }
    cout<<"Vertex\t\tDistance from source"<<endl;
    for(int i = 0; i<11; i++)
    { //Printing
        cout<<Name[i]<<"\t\t\t"<<dist[i]<<"    "<<Name[prev[i]]<<endl;
    }

    int i=dst;
    int total_distance=0;
    string path=Name[i];
    while(dist[i]!=0){
        path=Name[prev[i]]+" , "+path;
        total_distance=total_distance+graph[i][prev[i]];
        i=prev[i];
    }

    cout<<path<<"  total distance="<<total_distance<<endl;
}

int main()
{
    int graph[11][11]={
        // A   B  C  D  E  F  G  H  I  J  K
        {0, 5, 0, 0, 5, 0, 0, 0, 0, 0, 0},  //A
        {5, 0, 5, 0, 0, 3, 0, 0, 0, 0, 0},  //B
        {0, 5, 0, 3, 0, 6, 0, 0, 0, 0, 0},  //C
        {0, 0, 3, 0, 0, 0, 0, 0, 9, 0, 0},  //D
        {5, 0, 0, 0, 0, 0, 12, 0, 0, 0, 3}, //E
        {0, 3, 6, 0, 0, 0, 0, 0, 0, 5, 0},  //F
        {0, 0, 0, 0, 12, 0, 0, 6, 0, 6, 0},  //G
        {0, 0, 0, 0, 0, 0, 6, 0, 5, 0, 0},  //H
        {0, 0, 0, 9, 0, 0, 0, 5, 0, 6, 0},  //I
        {0, 0, 0, 0, 0, 5, 6, 0, 6, 0, 0},  //J
        {0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0},  //K
    };
    Dijkstra(graph,10,8);
    return 0;
}
