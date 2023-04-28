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

void insertAtTail( int x , node*& head )
{
	node* sam = head;
	node* temp = new node(x);

	if( !head )
	{
		head = temp;
		return ;
	}

	while( head->next )
	{
		head = head->next;
	}	

	head->next = temp;
	head = sam;
	return ;
}

void printLinkedList( node* head )
{
	while( head )
	{
		cout << head->val << " ";
		head = head->next;
	}
}

node* fold( node* head )
{
	//Base case
	if ( !head || !head->next )
	{
		return head;
	}

	//Recursive case
	node* temp = head;
	node* prev = NULL;
	while( temp->next )
	{
		prev = temp;
		temp = temp->next;
	}

	prev->next = NULL;

	node* headFromMyFriend = fold( head->next );
	head->next = temp;
	temp->next = headFromMyFriend;

	return head;
}


int main()
{
	int t;
	cin >> t;

	while ( t-- )
	{
		node* head = NULL;

		int N;
		cin >> N;

		int* arr = new int[N];
		for ( int i = 0 ; i < N ; i++ )
		{
			cin >> arr[i];
		}

		for ( int i = N-1 ; i >= 0 ; i-- )
		{
			insertAtHead( arr[i] , head );
		}

		delete[] arr;

		head = fold( head );

		printLinkedList( head );

		cout << endl;
	}

	return 0;
}