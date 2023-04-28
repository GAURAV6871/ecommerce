#include<iostream>
#include<vector>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}


void printlinkedlist(node* head)
{
    
    if(!head)
    {
        return;
    }
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            int m;
            cin>>m;
            vector<node*> list(n);
            for(int i=0;i<m;i++)
            {
                
            }

        }
    }


return 0;
}