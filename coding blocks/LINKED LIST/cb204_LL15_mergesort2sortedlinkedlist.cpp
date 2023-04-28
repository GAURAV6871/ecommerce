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

void insertAtHead(node*& head, int val) 
{
	node* n = new node(val);
	n->next = head; 
	head = n;
}

void printLinkedList(node* head) 
{
	while(head) 
    { 
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

node* mergesort(node* head1, node* head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* head;
    if(head1->val < head2->val)
    {
        head=head1;
        node* headfrommyfriend=mergesort(head1->next,head2);
        head->next=headfrommyfriend;
        return head;
    }
    else
    {
        head=head2;
        node* headfrommyfriend=mergesort(head1,head2->next);
        head->next=headfrommyfriend;
        return head;
    }
    
}

int main()
{
	node* head1 = NULL;

	insertAtHead(head1, 50);
	insertAtHead(head1, 30);
	insertAtHead(head1, 10);

    printLinkedList(head1);


    node* head2 = NULL;

    insertAtHead(head2, 60);
	insertAtHead(head2, 40);
	insertAtHead(head2, 20);
	

	printLinkedList(head2);


    node* head=mergesort(head1,head2);
    printLinkedList(head);
return 0;
}