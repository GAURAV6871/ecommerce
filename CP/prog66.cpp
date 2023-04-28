#include<iostream>
using namespace std;

class node
{
    public:
    int val;
    node* next;

    node(int x)
    {
        this->val=x;
        this->next=NULL;
    }    
};

void insertathead(node* &head, int val)
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
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

void printmidelement(node* head)
{
    node*slow=head;
    node* fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->val<<endl;
}


int main()
{
    node* head=NULL;
    insertathead(head,5);
    insertathead(head,4);
    insertathead(head,3);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,0);
    printlinkedlist(head);
    printmidelement(head);
return 0;
}