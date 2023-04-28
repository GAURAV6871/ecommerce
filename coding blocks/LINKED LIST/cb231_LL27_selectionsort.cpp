#include <iostream>
using namespace std;
  

class node 
{
public:

	int val;
	node* next;

	node(int val) 
    {
		this->val = val;
		this->next = NULL;
	}

};
  
void insertathead(node* &head, int val) 
{
	node* n = new node(val);
	n->next = head; 
	head = n;
}

void printlinkedlist(node* head) 
{
	while(head) 
    { 
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}



/*Function to swap the nodes */
node* swap(node* ptr1, node* ptr2)
{
    node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}
  
/* Function to sort the list */


void selectionSort(node* head)
{
    node* temp = head;
 
    // Traverse the List
    while (temp) 
    {
        node* min = temp;
        node* r = temp->next;
 
        // Traverse the unsorted sublist
        while (r) 
        {
            if (min->val > r->val)
            {
                min = r;
            }    
            r = r->next;
        }
 
        // Swap Data
        int x = temp->val;
        temp->val = min->val;
        min->val = x;
        temp = temp->next;
    }
}
    
// Driver Code
int main()
{
    int arr[] = { 78, 20, 10, 32, 1, 5 };
    int n, i;
  
    /* start with empty linked list */
    node* head = NULL;
    n = sizeof(arr) / sizeof(arr[0]);
  
    /* Create linked list from the array arr[] */
    for (i = 0; i < n; i++)
    {
        insertathead(head, arr[i]);
    }
    /* print list before sorting */
    cout <<"Linked list before sorting\n";
    printlinkedlist(head);
  
    /* sort the linked list */
    selectionSort(head);
  
    /* print list after sorting */
    cout <<"Linked list after sorting\n";
    printlinkedlist(head);
  
    return 0;
}