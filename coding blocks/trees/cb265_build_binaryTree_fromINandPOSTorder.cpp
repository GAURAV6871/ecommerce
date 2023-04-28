/*
given the in-order & pre-order traversal of a binary tree, design an algorithm to construct 
a binary tree from it.
Example 
	Input: pre[] = {10, 20, 40, 50, 70, 30, 60}
	       in[]  = {40, 20, 70, 50, 10, 30, 60}
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


void printPostOrder(node* root) 
{

	// base case
	if(!root) // root == NULL
    { 
		// cout << -1 << " ";
		return;
	}

	// recursive case

	

	// 1. do the preOrder traversal of the leftSubtree
	printPostOrder(root->left);

	// 2. do the preOrder traversal of the rightSubtree
	printPostOrder(root->right);
    // 3. process the root node
	cout << root->data << " ";

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


int post[]={40, 70, 50, 20, 60, 30, 10 };
int in[]={40, 20, 70, 50, 10, 30, 60};
int n=sizeof(post)/sizeof(int);
int i=0;



node* BuildTreeFromInPost(int s,int e)
{
    if(s>e)
    {   
        return NULL;
    }
    int x=post[i];
    i++;
    node* root = new node(x);
    int k=e;
    for(;k>=s;k--)
    {
        if(x==in[k])
        {
            break;
        }
    }
    root->left=BuildTreeFromInPost(s,k-1);
    root->right=BuildTreeFromInPost(k+1,e);
    return root;
    
}

int main() 
{

	node* root = BuildTreeFromInPost(0, n-1);

	printPostOrder(root);

	cout << endl;

	printInOrder(root);

	return 0;
}
