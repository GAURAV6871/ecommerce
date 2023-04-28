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


void insertathead(node* &head, int x)
{
    node *n=new node(x);
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


void removenthnode(node* &head, int pos)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    if(pos==1)
    {
        head=temp->next;
        delete temp;
        return;
    }
    while(pos!=1)
    {
        temp=temp->next;
        pos--;
    }

    //is pos is greater then the size of the linked list
    if (temp == NULL || temp->next == NULL) 
    {
        return;
    }
    node* nextnode=temp->next->next;
    delete temp->next;
    temp->next=nextnode;
}

int main()
{
    int n; 
    cout<<"enter the size of linked list"<<endl;
    cin>>n;
    node* head=NULL;
    int a[n];
    cout<<"enter the elements of the linked list: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];   
    }
    for(int i=n-1;i>=0;i--)
    {
        insertathead(head,a[i]);
    }
    cout<<"the linked list is: "<<endl;
    printlinkedlist(head);
    int pos; cin>>pos;
    removenthnode(head,n-pos);
    printlinkedlist(head);


return 0;
}