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

int sumofnodes(node* root)
{
    if(!root)
    {
        return 0;
    }
    
    int x=sumofnodes(root->left);
    int y=sumofnodes(root->right);
    return x+y+root->data;
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


    cout<<sumofnodes(root)<<endl;
    return 0;
}