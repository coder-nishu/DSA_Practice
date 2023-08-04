# include<stdio.h> 

int Binary_search(int arr[], int size, int key)
{
     int low, mid, high;
     low = 0;
     high = size - 1;
     mid = (low + high) / 2;
     while (low <= mid)
     {

          if (arr[mid] == key)
          {
               return mid;
          }
          else if (arr[mid] < key)
               low = mid + 1;
          else
               high = mid - 1;
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
     
     int b = Binary_search(arr, size, key);
    
     if (b == -1)
     {
          printf("Binary search: no search found\n");
     }
     else
     {
          printf("Binary search:The element %d is found at index %d\n", key, b);
     }
     return 0;
}