// HEIGHT OF A TREE
// it is the length of the longest path from a node to a leaf node

#include<iostream>
//#include<algorithm>
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


int heightoftree(node* root)
{
    if(!root)
    {
        return -1;
    }

    //ask your friend to find height in left subtree
    int x=heightoftree(root->left);

    //ask your friend to find height in right subtree
    int y=heightoftree(root->right);

    return 1+max(x,y);
}

int main()
{
    node* root=NULL;
    cout<<"enter the data of 1st tree"<<endl;
    root=buildtree();
    
    cout<<"the pre order of the tree is printed as"<<endl;
    printpreorder(root);
    cout<<endl;

    cout<<"height of the tree is: "<<heightoftree(root);
    return 0;
}