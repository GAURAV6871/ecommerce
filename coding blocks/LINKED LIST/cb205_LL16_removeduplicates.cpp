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

node* removeduplicates(node* head)
{
    if(!head || !head->next)
    {
        return head;
    }

    if(head->val!=head->next->val)
    {
        //head node is part of the final ans
        //ask your friend to remove all the duplicates from the linked list
        node* headfrommyfriend=removeduplicates(head->next);
        head->next=headfrommyfriend;
        return head;
    }

    else
    {
        while(head->next && head->val==head->next->val)
        {
            head=head->next;
        }
        //ask your friend to remove all the duplicates from the linked list that starts from head->next
        node* headfrommyfriend=removeduplicates(head->next);
        return headfrommyfriend;
    }
}

int main()
{
    node* head=NULL;

    insertathead(5,head);
    insertathead(5,head);
    insertathead(4,head);
    insertathead(3,head);
    insertathead(2,head);
    insertathead(2,head);
    insertathead(1,head);
    insertathead(1,head);
    insertathead(1,head);
    
    printlinkedlist(head);
    node* newhead=removeduplicates(head);
    printlinkedlist(newhead);

    

return 0;
}