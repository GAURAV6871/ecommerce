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
node* sortList(node* head) 
{
    vector<int> v;
    node* temp=head;
    while(temp)
    {
        v.push_back(temp->val);
        temp=temp->next;
    }    
    sort(v.begin(), v.end());
    node *newhead=NULL;
    for(int i=v.size()-1;i>=0;i--)
    {
        insertathead(newhead,v[i]);
    }
    printlinkedlist(newhead);
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
    sortList(head);
    /*
    int pos; cin>>pos;
    removenthnode(head,n-pos);
    printlinkedlist(head);*/


return 0;
}

