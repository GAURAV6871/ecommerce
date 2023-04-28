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

int main()
{
    node* root=NULL;
    string s;
    cin>>s;
    root=build(s);
    preorder(root);
    return 0;
}