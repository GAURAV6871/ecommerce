#include<iostream>
using namespace std;

class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;    
    }
};


void insertathead(int val, node* &head)
{
    node *n=new node(val);
    n->next=head;
    head=n;
}


void printlinkedlist(node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

node* leftpointer(node* head,int l)
{

    while(l-1)
    {
        head=head->next;
        l--;
    }
    return head;
}

node* rightpointer(node* head,int r)
{

    while(r-1)
    {
        head=head->next;
        r--;
    }
    return head;
}



node* reverseinbetween(node* head, node* left,node* right )
{
    if(!head)
    {
        return head;
    }
    node* prev=left;
    node* cur=left->next;
    
    int i=0;
    while(cur && left->next!=right)
    {
        node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
		i++;
    }
    return head;
}



int main()
{
    node *head=NULL;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //insertathead(a[i],head);
    }
    for(int i=n-1;i>=0;i--)
    {
        insertathead(a[i],head);
    }
    
    printlinkedlist(head);
    int l,r;
    cin>>l>>r;

    node* left=leftpointer(head,l);
    node* right=rightpointer(head,r);
    //cout<<left->val<<" "<<right->val<<endl;
    //int k=r-l;
    //k++;
    node* prev=reverseinbetween(head,left,right);
    //cout<<reverseinbetween(head,left,k);
    printlinkedlist(head);
}