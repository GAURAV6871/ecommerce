#include<iostream>
using namespace std;


class node
{
    public:
    int val;
    node* left;
    node* right;
    node(int val)
    {
        this->val=val;
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
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

void printinorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printinorder(root->left);
    cout<<root->val<<" ";
    printinorder(root->right);
}


int main()
{
    node* root=buildtree();
    cout<<"printing pre order"<<endl;
    printpreorder(root);
    cout<<"printing in order"<<endl;
    printinorder(root);
    
return 0;
}