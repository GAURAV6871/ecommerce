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


bool searchinBST(node* root, int target)
{
    if(!root)
    {
        return false;
    }
    if(target==root->data)
    {
        return true;
    }
    else if(target<root->data)
    {
        searchinBST(root->left,target);
    }
    else
    {
        searchinBST(root->right,target);
    }
    return false;
}

int main()
{
    node *root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->left->left=new node(3);
    root->left->right=new node(7);
    root->right->left=new node(13);
    root->right->right=new node(3);
    
    int target;
    cin>>target;
    searchinBST(root,target)?cout<<"true"<<endl:
                             cout<<"false"<<endl;
    
    //printInOrder(root);
    //cout<<endl;
    printLevelOrder(root);
}