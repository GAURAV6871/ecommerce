/*
given the pre-order traversal of a binary tree, design an algorithm to traverse the binary tree in 
zag zag format 
*/

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
			this->data = data;
			this->left = this->right = NULL;
		}
};


void printPreOrder(node* root) 
{

	// base case
	if(!root) // root == NULL
    { 
		// cout << -1 << " ";
		return;
	}

	// recursive case

	// 1. process the root node
	cout << root->data << " ";

	// 2. do the preOrder traversal of the leftSubtree
	printPreOrder(root->left);

	// 3. do the preOrder traversal of the rightSubtree
	printPreOrder(root->right);

}

void printInOrder(node* root) 
{

	// base case
	if(!root) { // root == NULL
		// cout << -1 << " ";
		return;
	}

	// recursive case

	// 1. do the inOrder traversal of the leftSubtree
	printInOrder(root->left);

	// 2. process the root node
	cout << root->data << " ";

	// 3. do the inOrder traversal of the rightSubtree
	printInOrder(root->right);

}


int pre[]={10, 20, 40, 50, 70, 30, 60};
int in[]={40, 20, 70, 50, 10, 30, 60};
int n=sizeof(pre)/sizeof(int);
int i=0;



node* BuildTreeFromInPre(int s,int e)
{
    if(s>e)
    {   
        return NULL;
    }
    int x=pre[i];
    i++;
    node* root = new node(x);
    int k=s;
    for(;k<=e;k++)
    {
        if(x==in[k])
        {
            break;
        }
    }
    root->left=BuildTreeFromInPre(s,k-1);
    root->right=BuildTreeFromInPre(k+1,e);
    return root;
    
}

int main() 
{
    acc

	node* root = BuildTreeFromInPre(0, n-1);

	printPreOrder(root);

	cout << endl;

	printInOrder(root);

	return 0;
}
