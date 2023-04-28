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



node* sumoftwolinkedlists(node* head1, node* head2) 
{

    node* head = NULL;

 	int carry = 0;

 	while(head1 != NULL and head2 != NULL) 
    {

 		int sum = head1->val + head2->val + carry;
 		node* n = new node(sum%10);
 		carry = sum/10;

 		n->next = head;
 		head = n;

 		head1 = head1->next;
 		head2 = head2->next;
    }    
    while(head1!=NULL)
    {
        int sum=head1->val+carry;
        node* n=new node(sum%10);
        carry=sum/10;

        n->next=head;
        head=n;


        head1=head1->next;
    }
    while(head2!=NULL)
    {
        int sum=head2->val+carry;
        node* n=new node(sum%10);
        carry=sum/10;

        n->next=head;
        head=n;

        head2=head2->next;
    }
    
    if(carry)
    {
        node* n=new node(carry);
        n->next=head;
        head=n;
    }
    return head;
}

node* reverse(node *head)
{
    node *prev=NULL;
    node *cur=head;
    while(cur)
    {
        node *temp= cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    
    return prev;
}


void printlinkedlist(node*  head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{   
    node* head1=NULL;
    long long int n1,n2;
    cin>>n1>>n2;

    int a[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
        insertathead(a[i],head1);
    }
    /*insertathead(3,head1);
    insertathead(6,head1);
    insertathead(5,head1);*/
    printlinkedlist(head1);
    
    //node* h1=reverse(head1);
    
    //printlinkedlist(h1);      //reversed linked list
    //cout<<endl;

    int b[n2];

    node* head2=NULL;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
        insertathead(b[i],head2);
    }
    //insertathead(2,head2);
    //insertathead(4,head2);
    //insertathead(8,head2);
    //insertathead(1,head2);
    printlinkedlist(head2);
    
    //node* h2=reverse(head2);
    
    //printlinkedlist(h2);    //reversed linked list 
    //cout<<endl;

    node* head=NULL;
    head=sumoftwolinkedlists(head1, head2);
    printlinkedlist(head);
    
return 0;
}