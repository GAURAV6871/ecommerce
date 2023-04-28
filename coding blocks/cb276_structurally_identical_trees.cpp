#include <iostream>

using namespace std;

class node
{
public:

	int data;
	node* left;
	node* right;

	node( int data )
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

node* buildTree(string s)
{
	//Base case

	if ( s == "false" )
	{
		return NULL;
	}

	//Recursive case

	node* root;

	if( s == "true" )
	{
		int rootdata;
		cin >> rootdata;

		root = new node(rootdata);

		string l;
		cin >> l;

		if( l == "true" )
		{
			root->left = buildTree(l);
		}

		string r;
		cin >> r;

		if ( r == "true" )
		{
			root->right = buildTree(r);
		}
	}

	return root;
}

bool IsIdentical( node* root1 , node* root2 )
{
	//Base case

	if( !root1 and !root2 )
	{
		return true;
	}

	//Recursive case
	bool x;
	bool y;
	if( root1->left and root2->left )
	{
		x = IsIdentical( root1->left , root2->left );
	}
	else if( !root1->left and !root2->left )
	{
		x = IsIdentical( root1->left , root2->left );
	}
	else
	{
		x = false;
	}

	if( root1->right and root2->right )
	{
		y = IsIdentical( root1->right , root2->right );
	}
	else if( !root1->right and !root2->right )
	{
		y = IsIdentical( root1->right , root2->right );
	}
	else
	{
		y = false;
	}

	return x and y;
}

int main()
{
	node* root1 = NULL;
	root1 = buildTree("true");

	node* root2 = NULL;
	root2 = buildTree("true");


	IsIdentical( root1, root2 ) ? cout << "true" << endl : cout << "false" << endl;
	return 0;
}