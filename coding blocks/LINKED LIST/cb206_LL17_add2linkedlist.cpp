
                                      //CODE IS INCOMPLETE

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

node*  sumof2linkedlist(node* h1,node*h2)
{
    node* head=NULL;
    int carry=0;
    while(h1!= NULL && h2!=NULL)
    {
        int sum=h1->val +h2->val;
        node* n=new node(sum%10);
        carry=sum/10;
        n->next=head;
        head=n;
        h1=h1->next;
        h2=h2->next;
    }
    return head;
}

int main()
{
    node* head1=NULL;

    insertathead(1,head1);
    insertathead(2,head1);
    insertathead(3,head1);

    node* head2=NULL;

    insertathead(5,head2);
    insertathead(6,head2);
    insertathead(7,head2);
    
    //printlinkedlist(head);
    node* newhead=sumof2linkedlist(head1,head2);
    printlinkedlist(newhead);

    

return 0;
}