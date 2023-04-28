#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}


int computeHeight(node* root) 
{
	// base case
	if(!root) 
    { 
		// height of empty tree is -1
		return -1;
	}

	// recursive case

	// 1. ask your friend for the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend for the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);

}

bool checkHeightBalanced(node* root) 
{

	// base case
	if(!root) 
    {
		// empty tree is height balanced
		return true;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtree is heightBalanced
	bool X = checkHeightBalanced(root->left);

	// 2. ask your friend to check if the rightSubtree is heightBalanced
	bool Y = checkHeightBalanced(root->right);

	// 3. check if the root node is heightBalanced
	bool Z = abs(computeHeight(root->left) - computeHeight(root->right)) <= 1 ? true : false;

	return X && Y && Z;

}




int main()
{
    node *root = build("true");

    cout << boolalpha << checkHeightBalanced(root);

    return 0;
}
