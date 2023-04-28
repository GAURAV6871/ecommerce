//BST : Binary search tree
//a BT tree is said to be a binary search tree if the value of every node in the binary tree is greater
//than the value of all the nodes in the LST  and smaller than the value of all the nodes in its RST

#include<iostream>
#include<queue>
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

void printLevelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front(); q.pop();
		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << front->data << " ";
			if(front->left) q.push(front->left);
			if(front->right)q.push(front->right);
		}
	}
}
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
int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        root=insert(root,a[i]);
    }    
    printInOrder(root);
    cout<<endl;
    printLevelOrder(root);
}