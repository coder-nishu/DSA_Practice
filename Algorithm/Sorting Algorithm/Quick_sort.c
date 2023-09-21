#include <stdio.h>
void print_arr(int arr[], int n)
{
    printf("Array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
int partition(int arr[], int low, int high)
{
    int temp;
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < j)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void quick_sort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quick_sort(arr, low, partitionIndex - 1);
        quick_sort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int arr[] = {3, 5, 4, 7, 6, 9, 8, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    print_arr(arr, n);
    quick_sort(arr, 0, n-1);
    print_arr(arr, n);

    return 0;
}