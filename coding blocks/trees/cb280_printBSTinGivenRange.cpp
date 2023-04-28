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
        left=right=NULL;
    }
};


node* insertbst(int data, node* root)
{
    if(!root)
    {
        root =new node(data);
        return root;
    }
    if(data>root->data)
    {
       root->right= insertbst(data,root->right);
    }
    else
    {
        root->left=insertbst(data,root->left);
    }
    return root;
}

void printin(node* root,int k1,int k2)
{
    if(!root) 
    {
        return;
    }    
    
    printin(root->left, k1,k2);
    
    if(root->data >= k1 and root->data <= k2 )
    {
        cout<<root->data<<" ";
    }

    printin(root->right,k1, k2);
}


void printpre(node* root)
{
    if(!root) return;
    cout<<root->data<<" ";
    printpre(root->left);
     printpre(root->right);
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        node* root=NULL;
        int n,data;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>data;
            root= insertbst(data,root);
        }
        int k1,k2;
        cin>>k1>>k2;
        cout<<"# Preorder : ";
        printpre(root);
        cout<<endl<<"# Nodes within range are : ";
        printin(root,k1,k2);
        cout<<endl;
    }
    return 0;
}