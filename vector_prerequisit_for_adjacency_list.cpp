//adjacency list prerequisite: vector
#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector < int > dynamicList[3];

    dynamicList[0].push_back(5);
    dynamicList[0].push_back(10);
    dynamicList[0].push_back(15);
    dynamicList[1].push_back(20);
    dynamicList[1].push_back(25);
    dynamicList[2].push_back(30);

    int length = dynamicList[1].size();

    cout<<"Size of the list: "<<length<<endl;

    for(int i = 0; i < length; i++)
    {
        cout<<dynamicList[1][i]<<" ";
    }

    //cout<<endl<<dynamicList[0]<<" "<<dynamicList[1]<<" "<<endl;

    cout<<endl<<"Vector in STL"<<endl;

    return 0;
}
