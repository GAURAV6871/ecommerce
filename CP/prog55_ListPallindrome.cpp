#include<iostream>
using namespace std;

class ListNode
{
    public:
    int val;
    ListNode* next;

    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};


void insertathead(int val, ListNode* &head)
{
    ListNode* n=new ListNode(val);
    n->next=head;
    head=n;
}

void printlinkedlist(ListNode* head)
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


ListNode* ReverseList(ListNode* head)
{
    if(!head)
    {
        return NULL;
    }
    ListNode* prev=NULL;
    ListNode* curr=head;

    while(curr)
    {
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }    
    cout<<"the reverse of the linked list is "<<endl;
    printlinkedlist(prev);
    return prev;
}
bool isPalindrome(ListNode* head) 
{
    ListNode* rev=ReverseList(head);
    printlinkedlist(rev);

    while(head!=NULL)
    {
        
        if(rev->val==head->val)
        {
            cout<<"comparing "<<rev->val<<" and "<<head->val<<endl;
            rev=rev->next;
            head=head->next;
        }
        else
        {
            cout<<"comparing "<<rev->val<<" and "<<head->val<<endl;
            return false;
        }
        
    }
    return true;
}

int main()
{
    ListNode* head=NULL;
    int n; cin>>n;

    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        insertathead(x,head);
    }
    printlinkedlist(head);
    cout<<isPalindrome(head);

    
    
return 0;
}