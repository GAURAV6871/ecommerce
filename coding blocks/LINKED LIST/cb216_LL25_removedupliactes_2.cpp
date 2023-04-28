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
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    if(head->val!=head->next->val)
    {
        //head node is the part of the new linked list
        //for the linked list that starts from head->next

        node* headfrommyfriend=removeduplicates(head->next);
        head->next=headfrommyfriend;
        return head;
    }
    else
    {
        while(head->next && head->val==head->next->val)
        {
            head=head->next;
        }
        node* headfrommyfriend=removeduplicates(head->next);
        return headfrommyfriend;
    }
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
    insertathead(head, 7);
    insertathead(head, 8);
    cout<<"linked list before removing duplicates "<<endl;
	printlinkedlist(head);
	head = removeduplicates(head);
    cout<<"linked list after removing duplicates"<<endl;
	printlinkedlist(head);

	return 0;
}
