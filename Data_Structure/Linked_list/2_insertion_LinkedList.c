# include<stdio.h> 
# include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;
void insert_first_position(){
    printf("...Inserting first position...\n");
    int data;
    printf("enter first data:");
    scanf("%d",&data);
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;

} 
void print_list(node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t",ptr->data);
       ptr =  ptr->next ;
    }
    
}

int main(){
    insert_first_position();
    insert_first_position();
    insert_first_position();
    print_list(head);
     return 0;
}