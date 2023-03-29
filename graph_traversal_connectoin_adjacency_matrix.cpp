#include <iostream>

using namespace std;

int adj[100][100];

int edges,nodes;


int main()
{
   int n1,n2;
   cout<<"enter the numbers of edges and nodes: "<<endl;

   cin >>edges>>nodes;
   //printing the empty adjacency matrix
   cout<<" "<<0<<"\t";


   for(int i=1;i<nodes;i++)
   {
       cout<<i<<"\t";
   }
   cout<<endl;
   for(int i=0;i<nodes;i++)
   {
       cout<<i<<": ";
        for(int j=0;j<nodes;j++)
        {
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
   }

   //taking edges as input
   cout<<"enter the edges between two nodes: "<<endl;
   for(int i=0;i<edges;i++)
   {
       cin>>n1>>n2;
       adj[n1][n2] = 1;
       adj[n2][n1] = 1;


   }
   //presenting the graph in adjacency matrix
   cout<<" "<<0<<"\t";


   for(int i=1;i<nodes;i++)
   {
       cout<<i<<"\t";
   }
   cout<<endl;
   for(int i=0;i<nodes;i++)
   {
       cout<<i<<": ";
        for(int j=0;j<nodes;j++)
        {
            cout<<adj[i][j]<<"\t";
        }
        cout<<endl;
   }
   int node1, node2;

    cout<<"enter two nodes to see connection"<<endl;
    cin>>node1>>node2;

    if(adj[node1][node2] == 1)
    {
        cout<<node1<<" and "<<node2<<" are connected"<<endl;
    }
    else
    {
        cout<<"Not connected"<<endl;
    }



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

