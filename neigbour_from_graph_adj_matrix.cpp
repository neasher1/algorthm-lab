#include <iostream>

using namespace std;

int adj[100][100];

int edges, nodes;


int main()
{
    int n1,n2;
    cout<<"enter the numbers of edges and nodes: "<<endl;

    cin >>edges>>nodes;
    //printing the empty adjacency matrix
    cout<<" "<<0<<"\t";


    for(int i=1; i<nodes; i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;

    for(int i=0; i<nodes; i++)
    {
        cout<<i<<": ";
        for(int j=0; j<nodes; j++)
        {
            cout<<adj[i][j]<<"\t";

           // cout<<"inside 2nd loo"<<endl;
        }
        cout<<endl;
    }

    //taking edges as input
    cout<<"enter the edges between two nodes: "<<endl;
    for(int i=0; i<edges; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;


    }
    //presenting the graph in adjacency matrix
    cout<<" "<<0<<"\t";


    for(int i=1; i<nodes; i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    for(int i=0; i<nodes; i++)
    {
        cout<<i<<": ";
        for(int j=0; j<nodes; j++)
        {
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
    }

    int x;

    cout<<"Enter node to see neighbour:"<<endl;
    cin>>x;

    for(int i = 0; i < nodes; i++)
    {
        if(adj[x][i] == 1)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
/*

6 4

0 1
0 2
0 3
1 2
1 3
3 2

*/
