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
    struct node *start, *node1, *node2, *node3, *newnode, *temp, *temp1;
    int pos;
    start = (struct node *)malloc(sizeof(struct node));
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    start->data = 30;
    start->next = node1;
    node1->data = 40;
    node1->next = node2;
    node2->data = 60;
    node2->next = node3;
    node3->data = 100;
    node3->next = NULL;

    printf("Perform Traversing\n");
    temp = start;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    printf("Perform Insertion at Location\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 120;
    newnode->next = NULL;
    temp1 = start;
    printf("Enter Location : ");
    scanf("%d",&pos);

    if (start == NULL)
    {
        start = newnode;
    }
    else

    {
        for (int i = 1;temp1!=NULL&& i<pos-1; i++)
        {
            temp1 = temp1->next;
        }
        newnode ->next = temp1->next;
        temp1->next = newnode;
    }
    printf("Perform Traversing\n");
    temp = start;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}