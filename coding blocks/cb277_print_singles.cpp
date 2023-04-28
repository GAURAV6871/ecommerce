// PRINT ALL THE NODES THAT ARE NOT HAVING ANY SIBLING
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



void printsingles(node* root)
{
    if(root==NULL)
    {
        return;
    }



    //if this is an internal node we will go for left and right subtree
    if(root->left && root->right)
    {
        printsingles(root->left);
        printsingles(root->right);
    }


    //if left child is null and right child is !NULL print right child node and recur for right child
    else if(!root->left && root->right)
    {
        cout<<root->right->data<<" ";
        printsingles(root->right);
    }

    //if right child is null and left child is !NULL print left child node and recur for leftt child
    else if(!root->right && root->left)
    {
        cout<<root->left->data<<" ";
        printsingles(root->left);
    }
}


/*void printpreorder(node* root)
{
    if(!root)
    {
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
    cout<<endl;
}*/

int main()
{
    node* root=NULL;
    string s;
    cin>>s;
    root=build(s);
    

    //printpreorder(root);
    printsingles(root);
    cout<<endl;
    return 0;
return 0;
}
