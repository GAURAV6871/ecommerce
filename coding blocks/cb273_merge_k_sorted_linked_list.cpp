#include <iostream>
#include<vector>
#include<queue>

using namespace std;

class node
{
    public:
    int data;
 	  node* next;
	
	  node(int data)
    {
	     this->data=data;
	     this->next = NULL;
	  }
};


void insertathead(int data, node* head)
{
    node* n= new node(data);
    n->next=head;
    head=n;
}


void printlinkedist(node* head)
{
    while (head != NULL)
	  {
        cout<<head->data<<" ";
		    head= head->next;
	  }
	  cout<<endl;
}



int main()
{
    node* head1=NULL;
    insertathead(head1,5 );
    insertathead(head1,3 );
    insertathead(head1,1 );
    printlinkedist(head1);



    node* head2=NULL;
    insertathead(head2,6 );
    insertathead(head2,4 );
    insertathead(head2,2 );
    printlinkedist(head2);

 
    node* head3=NULL;
    insertathead(head3,7);
    insertathead(head3,8 );
    insertathead(head3,0 );
    printlinkedist(head3);


    vector<node*> v;
    v.push_back(head1);
    v.push_back(head2);
    v.push_back(head3);



  return 0;
}