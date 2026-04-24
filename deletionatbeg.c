#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    printf("Creation of linked list.\n");
    struct node *start, *node1, *node2, *node3,*temp,*temp1;
    start = (struct node *)malloc(sizeof(struct node));
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    start->data = 10;
    start->next = node1;
    node1->data = 20;
    node1->next = node2;
    node2->data = 30;
    node2->next = node3;
    node3->data = 40;
    node3->next = NULL;
    temp = start;
    printf("Perform Traversing\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("Perform Deletion at Beginning\n");
    temp1=start;
    start = start->next;
    printf("Deleted value is %d\n", temp1->data);
    free(temp1);

    temp = start;
    printf("Perform Traversing after Deletion\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}