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


int lengthoflinkedlist(node* head)
{
    int len=0;
    while(head)
    {
        len++;
        head=head->next;
    }
    return len;
}

void printlinkedlist(node* head) 
{
	while(head != NULL) 
    {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}


node* intersectionoftwolinkedlists(node* head1, node* head2)
{
    int l1=lengthoflinkedlist(head1);
    int l2=lengthoflinkedlist(head2);
    //cout<<l1<<" "<<l2;
    int k=0;
    if(l2>l1)
    {
        int k=l2-l1;
        while(k>0)
        {
            head2=head2->next;
            k--;
        }
    }
    else
    {
        int k=l1-l2;
        while(k>0)
        {
            head1=head1->next;
            k--;
        }
    }

    while(head1 && head2)
    {
        if(head1->val==head2->val)
        {
            return head1;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return NULL;
}

void insertathead(int val, node* &head)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}





int main()
{   
    node* head1=NULL;
    insertathead(4,head1);
    insertathead(3,head1);
    insertathead(2,head1);
    insertathead(1,head1);
    //cout<<"the first linked kist is printed as"<<endl;
    //printlinkedlist(head1);
    //cout<<endl;

    node* head2=NULL;
    insertathead(4,head2);
    insertathead(3,head2);
    insertathead(2,head2);
    insertathead(6,head2);
    insertathead(7,head2);
    insertathead(9,head2);
    //cout<<"the second linked kist is printed as"<<endl;
    //printlinkedlist(head2);
    //cout<<endl;

    node* head=NULL;
    head=intersectionoftwolinkedlists(head1, head2);
    cout<<head->val<<endl;
return 0;
}