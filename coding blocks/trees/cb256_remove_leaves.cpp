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

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left)
    {
        cout<<root->left->data<<" => ";
    }    
    else
    {
        cout<<"END => ";
    }    
 
    cout<<root->data;

    if(root->right)
    {
        cout<<" <= "<<root->right->data;
    }    
    else
    { 
        cout<<" <= END";
    }    

    cout<<endl;
    preorder(root->left);
    preorder(root->right);
}


node* build(string s)
{
    if(s=="true")
    {
        int x;
        cin>>x;
        node*root=new node(x);
        string l;
        cin>>l;
        if(l=="true")
        root->left=build(l);

        string r;
        cin>>r;
        if(r=="true")
        root->right=build(r);
        
        return root;
    }
    return NULL;
}

int main()
{
    node* root=NULL;
    string s;
    cin>>s;
    root=build(s);
    preorder(root);
    return 0;
}