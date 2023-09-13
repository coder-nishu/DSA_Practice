#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;
void insert_first_position(int data)
{
    printf("%d is inserted in first position\n", data);
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;
}
void print_list()
{
    node *ptr = head;
    printf("linked list is:");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void insert_last_position(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    node *ptr = head;
    if (head == NULL)
    {
        printf("No Node in linked list.Inserting data into first node.\n");
        insert_first_position(data);
    }
    else
    {
        printf("%d is inserted in last position\n", data);
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
}
void insert_any_position()
{
    int key;
    printf("where you want to insert:");
    scanf("%d", &key);
    node *new_node = (node *)malloc(sizeof(node));
    int data;
    printf("Enter the data:");
    scanf("%d", &data);
    node *ptr = head;
    while (ptr->next != NULL)
    {
        if (ptr->data == key)
        {
            new_node->data = data;
            new_node->next = ptr->next;
            ptr->next = new_node;
            return;
        }
        ptr = ptr->next;
    }
    printf("No key found in linked list.insert it into last position.\n");
    insert_last_position(data);
}

int main()
{
    insert_first_position(6);
    insert_first_position(5);
    insert_first_position(4);
    print_list();
    insert_last_position(10);
    print_list();
    insert_any_position();
    print_list();
    return 0;
}