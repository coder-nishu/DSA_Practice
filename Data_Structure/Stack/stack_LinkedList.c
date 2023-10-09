
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;


void print_list()
{
    node *ptr = head;
    printf("linked list is:");
    if (head == NULL)
    {
        printf("No Node in linked list\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void push(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    node *ptr = head;
    if (head == NULL)
    {
        printf("No Node in linked list.Inserting data into first node.\n");
        node *ptr;
        ptr = (node *)malloc(sizeof(node));
        ptr->next = head;
        ptr->data = data;
        head = ptr;
    }
    else
    {
        printf("%d is inserted in rare position\n", data);
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
}

void pop()
{
    printf(".....Delete last...\n");
    node *ptr = head;
    if (head == NULL)
    {
        printf("Underflow\n");
        return;
    }
    else if (ptr->next == NULL)
    {
        if (head == NULL)
        {
            printf("Underflow");
            return;
        }
        head = head->next;
        return;
    }
    else
    {
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = NULL;
    }
}

int main()
{
    push(6);
    print_list();
    pop();
    print_list();
    push(7);
    print_list();
    push(8);
    print_list();
    push(9);
    print_list();
    pop();
    print_list();
    pop();
    print_list();
    pop();
    print_list();
    pop();
    print_list();
    return 0;
}