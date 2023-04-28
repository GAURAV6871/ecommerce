#include<iostream>
#include<queue>
#include<climits>
using namespace std;

int a[100];

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


void findmaximum(node* root)
{
    if(root->right==NULL)
    {
        cout<<root->data;
        return;
    }
    findmaximum(root->right);
    
    
    //cout<<x<<endl;
}

void kthlargest(node* root,int k, int& count)
{
    if(!root || count>=k)
    {
        return;
    }
    
    kthlargest(root->right,k,count);    //usually we write the function call for left BST first but here since
    count++;                            //we have to iterate the in order from largest to smallest we have written
    if(count==k)                        //the root->right first and then root->left 
    {
        cout<<root->data<<" ";
        return;
    }    
    kthlargest(root->left,k,count);
    
    
}
int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    int a[n];
    int data;
    int max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        cin>>data;
        root=insert(root,data);
    }  
    int k;
    cin>>k;
    int count=0;
    kthlargest(root,k,count);
    
    cout<<endl;

    //findmaximum(root);
}