#include <stdio.h>
void Bubble_sort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of elements:\n ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d elements : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Before Sorting the array is:\n");
    print_array(arr, n);
    Bubble_sort(arr, n);
    printf("After Sorting the array is:\n");
    print_array(arr, n);

    return 0;
}