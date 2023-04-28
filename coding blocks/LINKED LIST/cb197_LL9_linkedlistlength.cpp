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


void printlinkedlist(node* head)
{
    if(head==NULL)
    {
        return;
    }
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}


int length(node* head)
{
    int len=0;
    if(head==NULL)
    {
        return 0;
    }
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}

void insertathead(int val, node* &head)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

int main()
{
    node* head=NULL;

    insertathead(50,head);
    insertathead(40,head);
    insertathead(30,head);
    insertathead(20,head);
    insertathead(10,head);
    insertathead(50,head);
    insertathead(40,head);
    insertathead(30,head);
    insertathead(20,head);
    insertathead(10,head);

    printlinkedlist(head);

    cout<<length(head)<<endl;
    

return 0;
}