#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};



void lengthoflinkedlist(node* head,int &len)
{
    if(!head)
    {
        return;
    }
    while(head)
    {
        len++;
        head=head->next;
    }
}
node* gettail(node* head)
{
    node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    return tail;
}

node* kappend(node* head, int diff)
{
    if(!head)
    {
        return NULL;
    }
    diff--;
    node* temp=head;
    while(diff)
    {
        temp=temp->next;
        diff--;
    }
    node* newhead=temp->next;
    temp->next=NULL;
    node* tail=gettail(newhead);
    tail->next=head;
    head=newhead;
    return newhead;
}

void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}


void printlinkedlist(node* head)
{
    
    if(!head)
    {
        return;
    }
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}



int main()
{
    node* head=NULL;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //insertathead(head,a[i]);
    }    
    for(int i=n-1;i>=0;i--)
    {
        insertathead(head,a[i]);
    }  
    int k;
    cin>>k;
    int len=0;
    lengthoflinkedlist(head,len);
    //cout<<len;
    int diff=len-k;
    //cout<<diff;
    node* newhead=kappend(head,diff);
    printlinkedlist(newhead);
    return 0;
}