#include<iostream>
#include<queue>
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


node* insert(node* root, int data)
{
    if(!root)
    {
        root=new node(data);
        return root;
    } 
    if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }

    return root;
}


void findminimum(node* root)
{
    if(root->left==NULL)
    {
        cout<<root->data;
        return;
    }
    findminimum(root->left);
    
    
    //cout<<x<<endl;
}
int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        root=insert(root,a[i]);
    }  
    findminimum(root);  
    //printInOrder(root);
    cout<<endl;
    //printLevelOrder(root);
}