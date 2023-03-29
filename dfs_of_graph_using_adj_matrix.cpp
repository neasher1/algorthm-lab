#include<iostream>
using namespace std;

int adj[100][100];

int edges, nodes;

int visited[100];

void dfs(int x)
{
    visited[x] = 1;
    cout<<x<<"->";

    for(int i = 0; i < nodes; i++)
    {
        if(adj[x][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}

int main()
{
    int n1, n2;
    cout<<"Enter number of edges and nodes: "<<endl;

    cin>>edges>>nodes;

    //printing the empty adjacency matrix
    cout<<"  "<<0<<"\t";
    for(int i = 1; i < nodes; i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    for(int i = 0; i < nodes; i++)
    {
        cout<<i<<": ";
        for(int j = 0; j < nodes; j++)
        {
            cout<<adj[i][j]<<'\t';
        }
        cout<<endl;
    }

    //taking edges as input
    cout<<"Enter the edges between two nodes: "<<endl;
    for(int i = 0; i < edges; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    //representing the graph using adjacency matrix
    cout<<"  "<<0<<"\t";
    for(int i = 1; i < nodes; i++)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    for(int i = 0; i < nodes; i++)
    {
        cout<<i<<": ";
        for(int j = 0; j < nodes; j++)
        {
            cout<<adj[i][j]<<'\t';
        }
        cout<<endl;
    }

    //dfs traversal
    int x;
    cout<<"Enter source node for dfs: "<<endl;
    cin>>x;

    cout<<"The dfs traversal: "<<endl;
    dfs(x);

    cout<<"Graph is awesome!"<<endl;

    return 0;
}
/*
0 1
0 2
1 3
3 2
0 3
1 2
*/
