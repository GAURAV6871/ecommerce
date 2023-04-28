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



bool cycledetect(node* head)
{
    node* slow=head;
    node* fast=head;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    node* head=new node(10);
    head->next=new node(30);
    head->next->next=new node(40);
    head->next->next->next=new node(50);
    head->next->next->next->next=new node(60);
    head->next->next->next->next->next=new node(70);
    head->next->next->next->next->next->next=new node(80);
    head->next->next->next->next->next->next->next=new node(90);
    head->next->next->next->next->next->next->next->next=new node(100);
    head->next->next->next->next->next->next->next->next->next=new node(110);
    head->next->next->next->next->next->next->next->next->next->next=head->next->next->next;


    if(cycledetect(head))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}