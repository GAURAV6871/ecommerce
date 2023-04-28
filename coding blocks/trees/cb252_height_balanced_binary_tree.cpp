                // HEIGHT BALANCED BINARY TREE
// we say that a binary tree is balanced if for each node in the binary tree the absolute diff
// between the LST and RST is <=1 

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
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};



node* buildtree()
{
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node* root=new node(data);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}


void printpreorder(node* root)
{
    if(!root)
    {
        cout<<-1<<" ";
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
    
}


int computeheight(node* root)
{
    
    if(!root)
    {
        return -1;
    }

    //ask your friend to find height in left subtree
    int lh=computeheight(root->left);

    //ask your friend to find height in right subtree
    int rh=computeheight(root->right);

    return 1+max(rh,lh);       //we will the maximum of the 2 heights and add 1 to it to find the height
                               //of the subtree 
}


bool isheightbalanced(node* root)
{
    //basr case
    if(!root)
    {
        return true;
    }
    if(isheightbalanced(root->left)==false)      //agar left subtree me ek bhi node unbalanced ho jata hai
    {                                            //to humara pura tree he unbalanced ho jaega
        return false;
    }
    if(isheightbalanced(root->right)==false)    //agar right subtree me ek bhi node unbalanced ho jata hai
    {                                           //to humara pura tree he unbalanced ho jaega
        return false;
    }

    int lh=computeheight(root->left);           //hum apne current node ki left height nikalenge
    int rh=computeheight(root->right);          //hum apne current node ki right height nikalenge

                                               //hum apni left or right height ka absolute diff check kar 
    if(abs(lh-rh)<=1)                          //rahe hain agr abs diff <=1 aata hai to humara subtree      
    {                                          //height balanced hai 
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        node* root=NULL;
    
        cout<<"enter the data of tree"<<endl;
        root=buildtree();
        

    
        cout<<"the pre order of the tree is printed as"<<endl;
        printpreorder(root);
        cout<<endl;

        if(isheightbalanced(root))
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
        
    } 
return 0;   
}