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


//building BST
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


//inorder of BST
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


//search in BST
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


//delete in BST
node* deleteinBST(node* root, int key)
{
    if(key< root->val)
    {
        root->left=deleteinBST(root->left, key);
    }
    else if(key> root->val)
    {
        root->right=deleteinBST(root->right, key);
    }
    else
    {
        //case 1 & 2: our target key is either a single child or a leaf node
        if(root->left==NULL )
        {
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL )
        {
            node* temp=root->left;
            free(root);
            return temp;
        }
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