# include<stdio.h> 
# include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    
};
typedef struct Node node;
void print_list(node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t",ptr->data);
       ptr =  ptr->next ;
    }
    
}
int main(){
     node *head;
     node *second;
     node *third;
     node *fourth;


     head = (node *)malloc(sizeof(node));
     second = (node *)malloc(sizeof(node));
     third = (node *)malloc(sizeof(node));
     fourth = (node *)malloc(sizeof(node));

     head ->data = 5;
     head -> next = second;
     
     second->data = 7;
     second->next = third;

     third->data = 9;
     third->next = fourth;

     fourth->data = 11;
     fourth->next = NULL;

     print_list(head);
     return 0;
}