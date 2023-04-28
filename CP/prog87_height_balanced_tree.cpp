#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
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


bool isbalanced(int lheight, int rheight)
{
    return lheight==rheight;
}
int heightoftree(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=heightoftree(root->left);
    int rheight=heightoftree(root->right);
    cout<<endl<<isbalanced(lheight,rheight)<<endl;
    return max(lheight,rheight)+1;
}
bool isbalanced(int lheight, int rheight)
{
    return lheight==rheight;
}




int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(6);
    cout<<heightoftree(root);
return 0;
}