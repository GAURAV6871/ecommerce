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


node* mirrortree(node* root)
{
    if(!root)
    {
        return root;
    }

    //ask your friend to mirror the left subtree
    root->left=mirrortree(root->left);

    //ask your friend to mirror the left subtree
    root->right=mirrortree(root->right);

    //swap the left and right nodes
    swap(root->left,root->right);
    
    return root;

}

int main()
{
    node* root=NULL;
    cout<<"enter the data of 1st tree"<<endl;
    root=buildtree();
    
    cout<<"the pre order of the tree is printed as: ";
    printpreorder(root);
    cout<<endl;
    
    node* new_root=mirrortree(root);
    
    cout<<"the pre order of the mirrored tree is printed as: ";
    printpreorder(new_root);

    return 0;
}