#include <stdio.h>
int linear_search(int arr[], int size, int key);


int linear_search(int arr[], int size, int key)
{
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == key)
          {
               return i;
          }
     }
     return -1;
}

int main()
{
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int size = sizeof(arr) / sizeof(int);
     int key;
     printf("Enter the search key:");
     scanf("%d", &key);
     int l = linear_search(arr, size, key);
   
     if (l == -1)
     {
          printf("Linear search: no search found\n");
     }
     else
     {
          printf("Linear search:The element %d is found at index %d\n", key, l);
     }
     
     return 0;
}