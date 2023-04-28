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


void insertathead(int val, node* &head)
{
    //adding the desired value to the 1st part of the new node
    node* n=new node(val);

    //pointing the next field of the new node towards the value 
    //at previous head
    n->next=head;


    //making the new node as the new head 
    head=n;
}


node* gettail(node* temp)
{
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp;
}



void insertattail(int val, node* &head)
{
    if(head==NULL)
    {
        insertathead(val,head);
        return;
    }


    node* n=new node(val);

    node* tail= gettail(head);
    tail->next= n;
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



int main()
{
    node *head=NULL;

    insertathead(50, head);
	insertathead(40, head);
	insertathead(30, head);
	insertathead(20, head);
	insertathead(10, head);
	insertathead(0,  head);
    printlinkedlist(head);
    insertattail(60, head);

	printlinkedlist(head);

	insertattail(70, head);

	printlinkedlist(head);
return 0;
}