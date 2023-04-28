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

void deleteathead(node* head)
{
    node*temp=head;
    head=head->next;
    delete temp;
}


void deleteattail(node* head)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node* prev=NULL;
    node* tail=head;
    while(tail->next!=NULL)
    {
        prev=tail;
        tail=tail->next;
    }
    prev->next=NULL;            //last 2nd element ko humne last bana dia uski next field ko null pe point karke 
    delete tail;                //last wale element ko humne delete kar dia
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

    deleteattail(head);    //deleting the element from the tail
    
    printlinkedlist(head);   // printing the linked list after deleting the element from the tail

return 0;
}