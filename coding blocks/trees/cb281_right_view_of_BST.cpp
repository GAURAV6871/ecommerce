/*
given the pre-order traversal of a binary tree, output its right view.
Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 30 60 70
*/

#include<iostream>
#include<climits>
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
			this->data = data;
			this->left =NULL;
            this->right = NULL;
		}
};

node* buildTreeFromLevelOrder() 
{

	queue<node*> q; // to keep track of nodes whose child nodes are yet to be constructed

	int data;
	cin >> data;

	node* root = new node(data);
	q.push(root);

	while(!q.empty()) 
    {
		node* front = q.front(); q.pop();

		int leftData;
		cin >> leftData;
		if(leftData != -1) 
        {
			node* leftChild = new node(leftData);
			front->left = leftChild;
			q.push(leftChild);
		}

		int rightData;
		cin >> rightData;
		if(rightData != -1) 
        {
			node* rightChild = new node(rightData);
			front->right = rightChild;
			q.push(rightChild);
		}
	}
	return root;
}

/*void printRightView(node* root) 
{

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) 
    {
		node* front = q.front(); q.pop();
		if(!front) 
        { // front == NULL
			// you've processed the last level
			if(!q.empty()) 
            {
				// you've visited the next level
				q.push(NULL);
			}
		} 
        else
        {
			// process the front node

			if(q.front() == NULL) 
            {
				// front node is the right-most node of the given level
				cout << front->data << " ";
			}
			// visit the children of the front node

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

}*/

int max_level = INT_MIN;

void printRightViewRecursive(node* root, int level) 
{

	// base case
	if(!root) 
    {
        //cout<<-1<<" ";
		return;
	}

	// recurisve case

	if(max_level < level) 
    {
		cout << root->data << " ";
		max_level = level;
	}
	printRightViewRecursive(root->left, level+1);
	printRightViewRecursive(root->right, level+1);
	
}



int main() 
{

	node* root = buildTreeFromLevelOrder();

	//printRightView(root);
	printRightViewRecursive(root, 0);

	return 0;
}
