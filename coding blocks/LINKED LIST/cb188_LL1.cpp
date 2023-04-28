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
    //adding the desired value to the 1st part of the new node
    node* n=new node(val);

    //pointing the next field of the new node towards the value 
    //at previous head
    n->next=head;


    //making the new node as the new head 
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

int main()
{
    // creating a empty linked list
    node* head=NULL;

    insertathead(60, head);
    insertathead(50, head);
    insertathead(40, head);
    insertathead(30, head);
    insertathead(20, head);
    insertathead(10, head);


    printlinkedlist(head);
return 0;
}