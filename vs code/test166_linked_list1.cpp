#include <stdio.h> 
#include<stdlib.h> 
struct node 
{ 
int info; 
struct node* link; 
}; 
struct node* start = NULL; 
void insertAtFront() 
{
    int data; 
    struct node* temp; 
    temp = malloc(sizeof(struct node)); 
    printf("\nEnter number to be inserted : "); 
    scanf("%d", &data); 
    temp->info = data; 
    temp->link = start; 
    start = temp; 
} 
void display() 
{
    struct node *current = start; 
    if(start == NULL) 
    { 
        printf("List is empty\n"); 
        return; 
    }
    printf("Nodes of singly linked list: \n"); 
    while(current != NULL) 
    { 
        printf("%d ", current->info); 
        current = current->link;
    } 
    printf("\n"); 
} 
int main()   
{
    int choice; 
    while(1)
    {
        printf("\t1 For insert \n"); 
        printf("\t2 display \n"); printf("\t3 exit \n"); 
        printf("\t Enter choice \n"); 
        scanf("%d",&choice); 
        switch(choice)
        {
            case 1: insertAtFront(); 
            break; 
            case 2: display(); 
            break; 
            case 3: exit(1); 
            break; 
        } 
    } 
return 0; 
}
