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



node* buildtree()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node* root=new node(data);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}


int countnodes(node* root)
{
    if(!root)
    {
        return 0;
    }
    
    int x=countnodes(root->left);
    int y=countnodes(root->right);
    return x+y+1;
}

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


int main()
{
    node* root=NULL;
    root=buildtree();
    printpreorder(root);
    cout<<endl;


    cout<<countnodes(root)<<endl;
    return 0;
}