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


void printlinkedlist(node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}




void insertathead(int val, node* &head)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}


bool search(int target, node* head)
{
    while(head)
    {
        if(target==head->val)
        {
            return true;
        }
        head=head->next;
    }
    return false;
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
    int target;
    cout<<"enter the target you want to search"<<endl;
    cin>>target;
    cout<<endl;
    search(target,head)?cout<<"true"<<endl
                       :cout<<"false"<<endl;   
    

return 0;
}