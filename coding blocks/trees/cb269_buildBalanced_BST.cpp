#include<iostream>
#include<queue>
using namespace std;


class node
{
    public:
    int data;
    node* left;
    node*  right;
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


void printInOrder(node* root) 
{
	if(root == NULL) 
    {
		return;
	}

	printInOrder(root->left);
	cout << root->data << " ";
	printInOrder(root->right);
}



void printlevelorder(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* front=q.front();
        q.pop();
        if(front==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<front->data<<" ";
            if(front->left)
            {
                q.push(front->left);
            }
            if(front->right)
            {
                q.push(front->right);
            }
            
        }
    }
}
node* buildbalancedBST(int* a,int s, int e)
{
    if(s>e)
    {
        return NULL;
    }
    int m=s+(e-s)/2;
    node* root=new node(a[m]);
    root->left=buildbalancedBST(a,s,m-1);
    root->right=buildbalancedBST(a,m+1,e);

    return root;
}



int main()
{   
    node* root=NULL;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //root=insert(root,a[i]);
    }  
    root=buildbalancedBST(a,0,n-1);
    cout<<endl;

    printInOrder(root);
    cout<<endl;
    printlevelorder(root);



return 0;
}