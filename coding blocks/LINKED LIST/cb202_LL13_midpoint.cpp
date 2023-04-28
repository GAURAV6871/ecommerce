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


void printlinkedlist(node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}


node* getmidpoint(node* head)
{

    if(head==NULL)
    {
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(fast && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}



int main()
{
    node* head=NULL;
    //insertathead(60,head);
    insertathead(50,head);
    insertathead(40,head);
    insertathead(30,head);
    insertathead(20,head);
    insertathead(10,head);

    printlinkedlist(head);

    node* midpoint=getmidpoint(head);
    cout<<endl<<midpoint->val;

return 0;
}