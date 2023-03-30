//graph representation in adjacency list using vector
#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector < int > adjacencyList[4];

    adjacencyList[0].push_back(1);
    adjacencyList[0].push_back(2);
    adjacencyList[0].push_back(3);

    adjacencyList[1].push_back(0);
    adjacencyList[1].push_back(3);

    adjacencyList[2].push_back(0);
    adjacencyList[2].push_back(3);

    adjacencyList[3].push_back(0);
    adjacencyList[3].push_back(1);
    adjacencyList[3].push_back(2);

    int node;
    cout<<"Enter node to see neighbor: "<<endl;
    cin>>node;


    for(int i = 0; i < adjacencyList[node].size(); i++)
    {
        cout<<adjacencyList[node][i]<<" ";
    }

    //cout<<endl<<dynamicList[0]<<" "<<dynamicList[1]<<" "<<endl;

    cout<<endl<<"Graph representation using adjacency list"<<endl;

    return 0;
}
