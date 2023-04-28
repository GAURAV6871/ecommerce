#include<iostream>

using namespace std;

class node 
{
public:

	int val;
	node* next;

	node(int val) {
		this->val = val;
		this->next = NULL;
	}

};


void insertathead(node*& head, int val) 
{
	node* n=new node(val);
    n->next=head;
    head=n;
}


void printlinkedlist(node* head) 
{
	while(head) { 
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}


node* removeduplicates(node* head)
{
    node* prev=head;
    node* cur=head->next;
    while(cur)
    {
        if(cur->val!=prev->val)
        {
            prev->next=cur;
            prev=cur;
        }
        cur=cur->next;
    }
    prev->next=NULL;
    return head;
}


int main() {

	node* head = NULL;
    insertathead(head, 5);
	insertathead(head, 5);
	insertathead(head, 4);
	insertathead(head, 4);
	insertathead(head, 3);
	insertathead(head, 2);
	insertathead(head, 2);
	insertathead(head, 1);
	insertathead(head, 1);
	insertathead(head, 1);
    
    cout<<"linked list before removing duplicates "<<endl;
	printlinkedlist(head);
	head = removeduplicates(head);
    cout<<"linked list after removing duplicates"<<endl;
	printlinkedlist(head);

	return 0;
}
