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

node* reverse(node* head)
{
    if(!head)
    {
        return head;
    }
    node* prev=NULL;
    node* cur=head;
    while(cur!=NULL)
    {
        node* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}
int main()
{
    node *head=NULL;
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        insertathead(a[i],head);
    }
    
    int l,r;
    cin>>l>>r;
    
    node* current = head; 
    node* prev = NULL;
        int count = 1;
        while(count != l)
        {
            prev = current;
            current = current->next;
            count++;
        }
        node* start = current;
        while(count != r)
        {
            current = current->next;
            count++;
        }
        node* rest = current->next;
        current->next = NULL;
        node* newHead = reverse(start);
        if (prev!=NULL)
        {
            prev->next = newHead;
        }
        current = newHead;
        while(current->next!=NULL)
        {
            current= current->next;
        }
        current->next = rest;
        if(l == 1)
        {
            printlinkedlist (newHead);
        }
        else
        {
            printlinkedlist(head);
        }
        return 0;
}
