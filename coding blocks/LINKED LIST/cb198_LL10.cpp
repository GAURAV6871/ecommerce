#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node*& head,int data)
{
    node* n=new node(data);
    n->next=head;
    head=n;
}
void printlinkedlist(node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node* getnode(node* temp,int i)
{
     int j=0;
     while(j<i and temp)
     {
         temp=temp->next;
         j++;
     }
     return temp;
}
void deleteathead(node*& head)
{
    if(!head)
    {
        return;
    }
    node*temp=head;
    head=head->next;
    delete temp;
}
void deleteatindex(node*& head,int idx)
{
    if(!head)
    {
        return;
    }
     if(idx==0)
    {
        deleteathead(head);
        return;
    }
    node* cur=getnode(head,idx);
    if(!cur)
    {
        return;
    }
    node* prev=getnode(head,idx-1);
    prev->next=cur->next;
    delete cur;
}
int main()
{
    node* head=NULL;
    int n;
    cin>>n;
    int arr[n];
    int q;
    cin>>q;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        insertathead(head,arr[i]);
    }
    int k;
    while(q--)
    {
    cin>>k;
    deleteatindex(head,k);
    printlinkedlist(head);
    }
    return 0;
}