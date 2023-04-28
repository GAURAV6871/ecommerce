#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *ptr)
{ 
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    //allocates memory for node 1,2,3 in heap
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    //link first and second nodes
    head->data = 7;
    head->next = second;

    //link second and third nodes
    second->data = 17;
    second->next = third;

    //link forth and third nodes
    third->data = 27;
    third->next = forth;


    //terminating the list at forth node
    forth->data = 37;
    forth->next = NULL;

    
    linked_list_traversal(head);    //calling the traversal function
    return 0;
}
