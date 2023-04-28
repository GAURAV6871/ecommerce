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

void insertathead(int x,node* &head)
{
    node* n=new node(x ); 
    n->next=head;
    head=n;
}



void printlinkedlist(node* head)
{
    cout<<"print linked list function is called"<<endl;
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

node* reverse(node* temp)
{   
    if(temp==NULL)
    {
        return NULL;
    }
    node* curr= temp;
    node* prev=NULL;
    while(curr)
    {
        node* tem=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tem;
    }
    return prev;
}



bool ispallindrome(node* head, node* rev)
{
    
    //node*temp= head;
    /*if(head==NULL)
    {
        return 1;
    }*/
    cout<<"comparing values "<<head->val<<" "<<rev->val<<endl;
    while(head)
    {
        if(head->val==rev->val)
        {
            head=head->next;
            rev=rev->next;
            continue;
        }
        return false;
    }

    return true;
}

int main()
{
    int n; cin>>n;
    node* head=NULL;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        insertathead(x,head);
    }
    printlinkedlist(head);
    //cout<<ispallindrome(head);
    node* rev=reverse(head);

    printlinkedlist(rev);
    cout<<ispallindrome(head,rev);
   

return 0;
}