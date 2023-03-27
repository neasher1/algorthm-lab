#include<iostream>
#include<cstdlib>
using namespace std;

class Node{
    public:
        int value;
        Node *next;
};

void insertAtLast(Node* &head, int number)
{

    //cout<<"inset at last"<<endl;
    Node* newnode = new Node;
    newnode->value = number;
    newnode->next = NULL;
    Node *temp = head;

    if(head == NULL)
    {
        //cout<<"inside while loop"<<endl;
        head = newnode;
        return;
    }

    while(temp->next != NULL)
    {
        //cout<<"inside while loop"<<endl;
        temp = temp->next;
    }
    temp->next = newnode;
}

int main()
{
    Node *head = NULL;

    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 5);
    insertAtLast(head, 10);

    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<"-";
        temp= temp->next;
    }

    //inserting value to each node
    /*n0.value = 2;
    n1.value = 3;
    n2.value = 4;

    //linking each node
    head = &n0;
    n0.next = &n1;
    n1.next = &n2;
    n2.next = NULL;

    while(head != NULL)
    {
        cout<<"-->" <<n0.value;
        head = n0.next;
    }
*/
    cout<<"hello, linked list"<<endl;
}
