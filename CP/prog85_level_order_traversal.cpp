#include<iostream>
#include<vector>
#include<queue>
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



vector<int> levelorder(node* root)
{
    vector<int> ans;
    queue<node*> q;
    q.push(root);
    if(root==NULL)
    {
        return ans;
    }
    while(1)
    {
        int size=q.size();
        if(size==0)
        {
            return ans;
        }
        vector<int> data;
        
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
    vector<int>v;
    v=levelorder(root);



    
return 0;
}