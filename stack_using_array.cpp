#include<iostream>
using namespace std;
    int i=-1;
    int a[5];
void push(int x)
{
    if(i == 4)
    {
        cout<<"Stack is full, no way to push"<<endl;
        return;
    }
    i = i + 1;
    a[i] = x;
    return;
}

int pop()
{
    if(i < 0)
    {
        cout<<"Stack is empty, no element to pop"<<endl;
    }
    return a[i--];
}

void isEmpty()
{
    if(i<0)
    {
        cout<<"Empty Stack"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }

}

int main()
{
    cout<<"initial stack"<<endl;
    for(int j = 5; j >= 0; j--)
    {
        cout<<a[j]<<endl;
    }
    push(5);
    push(4);
    push(3);

    cout<<"after pop: "<<pop()<<endl;
    cout<<"after pop: "<<pop()<<endl;
    cout<<"after pop: "<<pop()<<endl;

    isEmpty();

    cout<<"after Some more operation"<<endl;
    push(11);
    push(10);

    isEmpty();

    cout<<endl<<"after operation"<<endl;
    for(int j = i; j >= 0; j--)
    {
        cout<<a[j]<<endl;
    }

    cout<<"hello"<<endl;
}
