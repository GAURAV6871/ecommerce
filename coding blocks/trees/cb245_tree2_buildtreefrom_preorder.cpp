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
    cout<<endl<<"the pre order of the given binary tree is: ";
    printpreorder(root);
    cout<<endl;
return 0;
}