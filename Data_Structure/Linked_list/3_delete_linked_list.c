#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;
node *last_previous_node;
void print()
{
    node *ptr = head;
    printf("Linked list:");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return;
}
void insert_1st_position(int data)
{
    node *newnode = (node *)malloc(sizeof(node));

    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return;
}
void insert_last(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    node *ptr = head;
    if (ptr == NULL)
    {
        insert_1st_position(data);
        return;
    }
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        last_previous_node = ptr;
    }
    return;
}
void insert_any_position(int key, int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    node *ptr = head;
    if (ptr == NULL)
    {
        insert_1st_position(data);
        return;
    }
    else
    {
        newnode->data = data;
        while (ptr->next != NULL)
        {
            if (ptr->data == key)
            {
                newnode->next = ptr->next;
                ptr->next = newnode;
                return;
            }
            ptr = ptr->next;
        }
        insert_last(data);
    }
    return;
}
void delete_head()
{
    head = head->next;
    return;
}
void delete_last()
{
    node *ptr = head;
    if (ptr == NULL)
    {
        printf("UnderFlow!!\n");
        return;
    }
    else if (ptr->next == NULL)
    {
        delete_head();
    }

    else
    {

        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = NULL;
        return;
    }
}
void delete_any(int key)
{
    node *ptr = head;
    if (ptr == NULL)
    {
        printf("Empty Linked list\n");
        return;
    }
    else if (ptr->data == key)
    {
        delete_head();
    }
    else
    {
        while (ptr->next->next != NULL)
        {
            if (ptr->next->data == key)
            {
                ptr->next = ptr->next->next;
                return;
            }
            ptr = ptr->next;
        }
        printf("key not found\n");
    }
    return;
}
int main()
{
    insert_1st_position(3);
    print();
    insert_1st_position(2);
    print();
    insert_1st_position(1);
    print();
    insert_last(5);
    print();
    insert_last(6);
    print();
    insert_any_position(12, 4);
    print();
    delete_head();
    print();
    delete_last();
    print();
    delete_any(2);
    print();

    return 0;
}