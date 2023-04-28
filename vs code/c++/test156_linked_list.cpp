#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insert_at_tail(node* &head,int val)
{
    
}
int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    //Allocates memory for nodes of linked list in heap
    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));


    //link 1st and second nodes
    head->data=7;
    head->next=second;
    //link 2nd and 3rd nodes
    second->data=11;
    head->next=third;
    //link 1st and second nodes
    third->data=14;
    head->next=NULL;
    cout<<"the programme is running without any error"<<endl;
return 0;
}
