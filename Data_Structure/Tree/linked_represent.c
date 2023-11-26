# include<stdio.h> 
# include<stdlib.h> 
struct tree_node{
    int data;
    struct tree_node *left;
    struct tree_node *right;   
};
typedef struct tree_node node;
node* create_node(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}
void print_preoreder(node* root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        print_preoreder(root->left);
        print_preoreder(root->right);
    }
    
}
int main(){
     
    node* p1 = create_node(4);
    node* p2 = create_node(1);
    node* p3 = create_node(6);
    node* p4 = create_node(5);
    node* p5 = create_node(2);

    p1->left = p2;
    p1->right = p3;

    p2->left = p4;
    p2->right = p5;

    print_preoreder(p1);
     return 0;
}