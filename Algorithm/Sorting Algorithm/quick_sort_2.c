#include <stdio.h>
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
void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (1)
    {
        while (i < high && arr[i] < pivot)
        {
            i++;
        }
        while (j > low && arr[j] > pivot)
        {
            j--;
        }
        if (i >= j)
        {
            break;
        }
        else
        swap(&arr[i], &arr[j]);
    }
    swap(&arr[j],&arr[low]);
    return j;
}
void quick_sort(int arr[], int low, int high)
{
    
    while (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        quick_sort(arr, low, partitionIndex);
        quick_sort(arr, partitionIndex + 1, high);
    }
}
int main()
{
    int arr[] = {7, 8, 9, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0,high = n-1;
    
    print(arr, n);
    printf("\n");
    quick_sort(arr,low,high);
    print(arr, n);
    return 0;
}