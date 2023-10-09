#include <stdio.h>
#define max 100

int stack[max];
int top = -1;

void print_stack()
{
    printf("stack array is:");
    if (top < 0)
    {
        printf("No item in stack\n");
        return;
    }
    else
    {
       for(int i=top;i>=0;i--)
       {
           printf("%d\t",stack[i]);
       }
       printf("\n");
    }
}
void push(int value)
{
    if (top >= max - 1)
    {
        printf("overflow!\n");
        return;
    }
    else
    {
        printf("added %d in top->%d\n",value,top+1);
        stack[++top] = value;
    }
}
void pop()
{
    if(top<0)
    {
         printf("Underflow!\n");
    }
    else
    {
        printf("deleted rare value : %d\n",stack[top]);
        stack[--top];
        
    }
}

int main()
{
    push(7);
    print_stack();
    pop();
    print_stack();
    pop();
    print_stack();
    push(10);
    print_stack();
    

    return 0;
}