#include<iostream>
using namespace std;

class Node
{
    public:
        int value;
        Node* left;
        Node* right;

    Node(int data)
    {
        value = data;
        left = NULL;
        right = NULL;
    }

};

void preorder(Node* &root)
{
    if(root != NULL)
    {
        cout<<root->value<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* &root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->value<<" ";
        inorder(root->right);
    }
}

void postorder(Node* &root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->value<<" ";
    }
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<"Preorder traversal:"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Inorder traversal:"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Postorder traversal:"<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}
