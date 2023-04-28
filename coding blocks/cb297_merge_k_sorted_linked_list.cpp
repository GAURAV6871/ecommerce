#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertathead(node* &head, int data)
{
    node*n=new node(data);
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


class nodecomparator
{
    public:
    
    //return true when swap is required
    bool operator()(node* a, node* b)
    {
        return b->data<a->data;    //if child(data)<parent(data), we swap
    }
};

node* mergeKSortedLinkedList(vector<node*> v)
{
    node* head=new node(-1);
    node*temp=head;
    //we need to compare nodes in the minheap and c++ by default dont know 
    //how to compare nodes so we need to make a custom comparator
    
    priority_queue<node*, vector<node*>, nodecomparator> minheap;
    for(int i=0;i<v.size();i++)
        minheap.push(v[i]);

    while(!minheap.empty()) 
    {
        node* minnode= minheap.top();
        minheap.pop();
        temp->next=minnode;
        temp=temp->next;

        if(minnode->next)
        {
            minheap.push(minnode->next);
        }

    }
    head=head->next;
    return head;
}

int main()
{
    node* head1=NULL;
    insertathead(head1,5);
    insertathead(head1,3);
    insertathead(head1,1);
    printlinkedlist(head1);


    node* head2=NULL;
    insertathead(head2,6);
    insertathead(head2,4);
    insertathead(head2,2);
    printlinkedlist(head2);


    node* head3=NULL;
    insertathead(head3,7);
    insertathead(head3,8);
    insertathead(head3,0);
    printlinkedlist(head3);

    vector<node*> v;
    v.push_back(head1);
    v.push_back(head2);
    v.push_back(head3);

    node* head=mergeKSortedLinkedList(v);
    printlinkedlist(head);
return 0;
}