#include <stdio.h>
void swap(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}
void print(int *a, int n)
{
     // int n = sizeof(a)/sizeof(int);
     printf("array is:");
     for (int i = 0; i < n; i++)
     {
          printf("%d\t", a[i]);
     }
     printf("\n");
}
void bubble_sort(int arr[], int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 1; j < n - i; j++)
          {
               if (arr[j - 1] < arr[j])
               {
                    swap(&arr[j], &arr[j - 1]);
               }
          }
     }
}
void greedy_coin(int coin[], int n, int amount)
{
     bubble_sort(coin, n);
     int remaining_amount = amount;
     int total_coin = 0, num_of_coin;
     for (int i = 0; i < n; i++)
     {
          num_of_coin = remaining_amount/coin[i];
          if(remaining_amount>0)
          {
               
               remaining_amount -= (num_of_coin*coin[i]);
               printf("%dtk's coin X %d = %d\n",coin[i],num_of_coin,(num_of_coin*coin[i]));
               total_coin += num_of_coin;
          }
     }
     printf("_________________________\n total amount:    %d\n",amount);
     printf("total coin needed:%d\n",total_coin);
}
int main()
{
     int coin[] = {10, 5, 1, 25};
     int n = sizeof(coin) / sizeof(int);
     int amount = 67;
     greedy_coin(coin,n,amount);
     return 0;
}