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


bool searchrecursive(int target, node* head)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->val==target)
    {
        return target;
    }
    return searchrecursive(target, head->next);
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
    searchrecursive(target,head)?cout<<"true"<<endl
                       :cout<<"false"<<endl;   
    

return 0;
}