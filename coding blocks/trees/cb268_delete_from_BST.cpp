/*how to delete a node from a BST
                |
                |
_______________________________________
|               |                      |
(leaf node)   (node with     (node with 2 child)
               single child)

*/
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

node* findmaximum(node* root)
{

    if(root->right==NULL)
    {
        cout<<root->data;
        return root;
    }
    findmaximum(root->right);
    return root;

    
    
    //cout<<x<<endl;
}

node* deletefromBST(node* root,int target)
{
    //base case
    if(!root)    //key is not present in the BST
    {
        return root;
    }


    //recursive case
    if(target<root->data)
    {
        root->left=deletefromBST(root->left,target);
    }
    else if(target>root->data)
    {
        root->right=deletefromBST(root->right,target);
    }
    else
    {
        //we have reached the root whose data is equal to the target 
        //nOw we have to delete the root


        //CASE 1:root is the leaf node
        if(!root->left  and !root->right)
        {
            delete root;
            root=NULL;
        }


        //CASE 2:root is having single child
        else if(root->left  and !root->right)
        {
            node*temp=root->left;
            delete root;
            root=temp;
        }
        else if(!root->left  and root->right)
        {
            node*temp=root->right;
            delete root;
            root=temp;
        }


        //CASE 3:root is having two child
        else
        {
            node* leftmax=findmaximum(root->left);//we will find the maximum value in the left subtree
            swap(leftmax->data,root->data);
            root->left=deletefromBST(root->left,target);
        }
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
    int target;
    cout<<"enter the target to be deleted"<<endl;
    cin>>target;
    deletefromBST(root,target);
    printInOrder(root);
    cout<<endl;
    printLevelOrder(root);

}
                