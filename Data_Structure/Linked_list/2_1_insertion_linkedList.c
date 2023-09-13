#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
void print_list(node *ptr)
{
    printf("Linked list are:");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
node *insert_1st_position(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
node *insert_between_position(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
}
node *insert_last_position(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    
    node * p = head;

    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    head->data = 5;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = NULL;

    print_list(head);
    head = insert_1st_position(head, 4);
    print_list(head);
    head = insert_last_position(head,13);
    print_list(head);
    return 0;
}