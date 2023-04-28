#include <iostream>

using namespace std;

class node
{
public:

	int val;
	node* next;

	node( int val )
	{
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead( int x , node*& head )
{
	node* temp = new node(x);
	temp->next = head;
	head = temp;
}



void printLinkedList( node* head )
{
	while( head )
	{
		cout << head->val << " ";
		head = head->next;
	}
}



node *arrangeoddeven(node* head) 
{
    if(!head)
    {
        return head;
    }
    node *odd = head;
    node *even = head->next;
    node *odd_head = head;
    node *even_head = head->next;
        
    while(even && even->next)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
        odd->next = even_head;        
        return head;
}
int main()
{
	int t;
	cin >> t;

	while ( t-- )
	{
		node* head = NULL;

		int n;
		cin >> n;

		int* arr = new int[n];
		for ( int i = 0 ; i < n; i++ )
		{
			cin >> arr[i];
		}

		for ( int i = n-1 ; i >= 0 ; i-- )
		{
			insertAtHead( arr[i] , head );
		}

		delete[] arr;

		head = arrangeoddeven( head );

		printLinkedList( head );

		cout << endl;
	}

	return 0;
}