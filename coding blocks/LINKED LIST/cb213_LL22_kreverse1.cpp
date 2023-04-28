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
    node* n=new node(val);
    n->next=head;
    head=n;
}

node* kreverse(node* head,int k)
{
    if(!head)
    {
        return head;
    }
    node* prev=NULL;
    node* cur=head;
    int i=0;
    while(cur && i<k)
    {
        node*temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
        i++;
    }

    node* headFromMyFriend = kreverse(cur, k);
	head->next = headFromMyFriend;
	return prev;
}


void printlinkedlist(node*  head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

node* reverse(node * &head)
{
    node *prev=NULL;
    node *cur=head;
    while(cur)
    {
        node *temp= cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    
    return prev;
}



int main()
{   
    node* head=NULL;
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        insertathead(a[i],head);
    }
    //cout<<"linked list before reverse is"<<endl;
    //printlinkedlist(head);
    
    //node *h1=NULL;
    head=reverse(head); 
    //cout<<"linked list after reverse is"<<endl;
    //printlinkedlist(head);

    //cout<<"linked list after k-reverse is"<<endl;
    head=kreverse(head,k);
    printlinkedlist(head);
    
return 0;
}