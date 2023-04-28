#include<iostream>
#include<vector>
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

node* buildBST(int val, node* &root)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(root->val> val)
    {
        root->left=buildBST(val, root->left);
    }
    else
    {
        root->right=buildBST(val,root->right);
    }
    return root;
}
void inorder(node* root)
{
    if( root==NULL)
    {
        return;
    }
    inorder(root->left);    
    cout<<root->val<<" ";
    inorder(root->right);
}
bool searchinBST(int target, node* root)
{
    if(root==NULL)
    {
        return false;
    }
    if(target==root->val)
    {
        return true;
    }
    else if(target< root->val)
    {
        return searchinBST(target, root->left);
    }
    else
    {
        return searchinBST(target, root->right);
    }
}

int main()
{
    node* root=NULL;
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {   
        cin>>a[i];
    }
    root=buildBST(a[0], root);
    for(int i=1;i<n;i++)
    {
        buildBST(a[i], root);
    }
    inorder(root);


    int target;
    cin>>target;
    cout<<searchinBST(target, root);
return 0;
}