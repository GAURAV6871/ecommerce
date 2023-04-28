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
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

void deletenode(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
}


int main()
{
    node* head=NULL;

    insertathead(50,head);
    insertathead(40,head);
    insertathead(30,head);
    insertathead(20,head);
    insertathead(10,head);

    printlinkedlist(head);

    deletenode(head);
    printlinkedlist(head);
return 0;
}