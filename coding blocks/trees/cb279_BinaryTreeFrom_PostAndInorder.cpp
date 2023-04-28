#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node *buildtreefrompostin(int *post, int *in, int s, int e,int i)
{
    // base case
    if (s > e || i<0)
    {
        return NULL;
    }
    // recursive case
    int x = post[i];
    i--;
    node *root = new node(x);
    int k = s;
    for (; k <= e; k++)
    {
        if (in[k] == x)
        {
            break;
        }
    }
    
    root->left = buildtreefrompostin(post, in, s, k - 1, i);
    root->right = buildtreefrompostin(post, in, k + 1, e, i);
    

	return root;
}
void inorder(node* root)
{
    if(!root)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void print(node *root)
{
    if (!root)
    {
        return;
    }
    if (root->left and root->right)
    {
        cout << root->left->data ;
        cout<<" => ";
        cout << root->data;
        cout<<" <= ";
        cout << root->right->data <<endl;
    }
    if (!root->left and !root->right)
    {
        cout << "END"
             << " "
             << "=> ";
        cout << root->data;
        cout<<" <= END"<<endl;
    }
    if (!root->left and root->right)
    {
        cout<<"END => ";
        cout<<root->data;
        cout<<" <= ";
        cout<<root->right->data<<endl;
    }
    if (root->left and !root->right)
    {
        cout << root->left->data;
           cout<<" => ";
        cout << root->data;
        cout<<" <= END"<<endl;
    }
     print(root->right);
    print(root->left);
   
    return;
}
int main()
{
    int n;
    cin >> n;
    int post[n];
    for (int i = 0; i < n; i++)
    {
        cin >> post[i];
    }
    int m;
    cin >> m;
    int in[m];
    for (int i = 0; i < m; i++)
    {
        cin >> in[m];
    }
    int j = n - 1;
    node *root = buildtreefrompostin(post, in, 0, m - 1, j);
    print(root);
   //inorder(root);
    return 0;
}