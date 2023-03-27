#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;

};

void deleteFromHead(Node* &head)
{
    Node* temp;
    temp = head;
    head = head->next;

    delete temp;
}

void search(Node* &head, int key)
{
    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->value == key)
        {
            cout<<key<<" found";
            return;
        }
        temp = temp->next;
    }
    cout<<key<<" is not found in the list"<<endl;
}


void insertAtPos(Node* head, int pos, int number)
{
    Node* newnode = new Node;
    newnode->value = number;

    Node* temp = head;

    for(int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}


void insertAtHead(Node* &head, int number)
{
    Node* newnode = new Node;
    newnode->value = number;
    newnode->next = head;
    head = newnode;
}

void insertAtTail(Node* &head, int number)
{
    //cout<<"inside insert"<<endl;
    Node* newnode = new Node;
    newnode->value = number;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
    {
        //cout<<"inside while"<<endl;
        temp = temp->next;
    }
    temp->next = newnode;
}

void DisplayList(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<" -> ";
        temp = temp->next;
    }
    cout<<endl;

}

int main()
{
    Node *head = NULL;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    insertAtHead(head, 5);
    insertAtHead(head, 1);

    cout<<"Printing Our List: "<<endl;
    DisplayList(head);

    //searching 5 int he list
    search(head, 100);
    //inserting at position 2;
    //insertAtPos(head, 2, 100);

   /* cout<<"After insertion of new value"<<endl;
    DisplayList(head);
    */
    deleteFromHead(head);


    cout<<"After deleting of new value"<<endl;
    DisplayList(head);
    return 0;
}
