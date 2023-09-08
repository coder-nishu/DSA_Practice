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
void print_array(int *arr, int size)
{
    printf("Given array is:");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    print_array(arr,size);
    int key;
    printf("Enter the search key:");
    scanf("%d", &key);
    int l = linear_search(arr, size, key);
    int b = Binary_search(arr, size, key);

    if (l == -1)
    {
        printf("Linear search: no search found\n");
    }
    else
    {
        printf("Linear search:The element %d is found at index %d\n", key, l);
    }

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