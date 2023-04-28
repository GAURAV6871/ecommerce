#include<iostream>
#include<vector>
#include<map>
using namespace std;

class node
{
    public:
    int data;
    node* right;
    node* left;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


node* buildtree()
{
    int x;
    cin>>x;
    if(x==-1)
    {
        node* root=NULL;
        return root;
    }
    node* root=new node(x);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}



void verticalOrder(node*root, map<int, vector<int> >&distmap,int d )
{
    //base case
    if(!root)
    {
        return;
    }
    
    //recursive case
    distmap[d].push_back(root->data);
    verticalOrder(root->left,distmap,d-1);
    verticalOrder(root->right,distmap,d+1);

}

int main()
{
    node* root=NULL;
    root=buildtree();
    map<int, vector<int> > distmap;
    verticalOrder(root, distmap,0);
    for(pair<int , vector<int> > p : distmap)
    {
        cout<<p.first<<" : ";
        for(int node : p.second)
        {
            cout<<node<<" ";
        }
        cout<<endl;
    }


return 0;
}