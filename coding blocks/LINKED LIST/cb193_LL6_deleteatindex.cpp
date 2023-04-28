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
    node* n=new node(val);
    n->next=head;
    head=n;
}



void printlinkedlist(node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

void deleteathead(node* head)
{
    node*temp=head;
    head=head->next;
    delete temp;
}


void deleteattail(node* head)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node* prev=NULL;
    node* tail=head;
    while(tail->next!=NULL)
    {
        prev=tail;
        tail=tail->next;
    }
    prev->next=NULL;            //last 2nd element ko humne last bana dia uski next field ko null pe point karke 
    delete tail;                //last wale element ko humne delete kar dia
}



node* getnode(int i,node* temp)
{
    int k=1;
    while(temp!=NULL && k<i)
    {
        temp=temp->next;
        k++;
    }
    return temp;
}





void deleteatindex(int i, node* head)
{
    if(head==NULL)    //linked list does not exist
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    // 1. get hold of the pointer to the node at the (i-1)th index
	node* prev = getnode(i-1, head);
    if(prev == NULL) 
    {
		// you are trying to delete at an invalid index
		return;
	}

    // 1. get hold of the pointer to the node at the (i)th index
    node* cur =getnode(i,head);

    if(cur==NULL)
    {
        return;   // you are trying to delete at an invalid index
    }

    //humne ith index me jo address store tha usko previous element ke address me store kara dia 
    //or frr cur node ko delete kar dia
    prev->next=cur->next;
    delete cur;
}



int main()
{
    node* head=NULL;

    insertathead(50,head);
    insertathead(40,head);
    insertathead(30,head);
    insertathead(20,head);
    insertathead(10,head);

    printlinkedlist(head);
    int i;
    cout<<"enter the index you want the element to delete"<<endl;
    cin>>i;
    cout<<endl;
    deleteatindex(i,head);    //deleting the element from the tail
    
    printlinkedlist(head);   // printing the linked list after deleting the element from the tail

return 0;
}