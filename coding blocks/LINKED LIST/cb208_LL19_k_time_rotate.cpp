#include<iostream>

using namespace std;

class node {
public:

	int val;
	node* next;

	node(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead(node*& head, int val) {
	node* n = new node(val);
	n->next = head; 
	head = n;
}

void printLinkedList(node* head) {
	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

node* kRotate(node* head, int k) 
{
    if(!head)
    {
        return head;
    }
    node* tail=head;
    int n=1;
    while(tail->next!=NULL)
    {
        tail=tail->next;
        n++;
    }

    tail->next=head;


    node* newtail=head;
    for(int i=0;i<(n-(k%n)-1);i++)
    {
        newtail=newtail->next;
    }
    node* newhead=newtail->next;

    newtail->next=NULL;
    return newhead;
}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 8;

	node* newHead = kRotate(head, k);

	printLinkedList(newHead);

	return 0;
}