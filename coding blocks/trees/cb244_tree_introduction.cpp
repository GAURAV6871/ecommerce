#include<iostream>
using namespace std;


class node
{
    public: 
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

//function for printing pre order
// root<left><right>

void printpreorder(node* root)
{
    if(!root)
    {
        cout<<-1<<" ";
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

//function for printing in order
// <left>root<right> 

void printinorder(node* root)
{
    if(!root)
    {
        cout<<-1<<" ";
        return;
    }
    
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}

//function for printing in order
// <left>root<right> 

void printpostorder(node* root)
{
    if(!root)
    {
        cout<<-1<<" ";
        return;
    }
    
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    node* root=NULL;
    root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    root->left->right->left=new node(70);


    printpreorder(root);
    cout<<endl;
    printinorder(root);
    cout<<endl;
    printpostorder(root);
    cout<<endl;
return 0;
}