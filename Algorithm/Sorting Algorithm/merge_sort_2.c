#include <stdio.h>
void merge_1(int arr[], int low,int mid, int high)
{
    int b[high + 1];
    int i = low;
    int j = mid+1; 
    int k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k++] = arr[i++];
        }
        else
        {
            b[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = arr[i++];
    }
    while (j <= high)
    {
        b[k++] = arr[j++];
    }
    for(int i=low;i<=high;i++)
    {
        arr[i] = b[i];
    }
}
void merge_sort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge_1(arr,low,mid,high);
    }

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
int main()
{
    int arr[] = {7, 8, 9, 1, 3, 5};
    int n = sizeof(arr)/sizeof(int);
    print(arr, n);
   
    merge_sort(arr,0,n-1);
    print(arr, n);
    return 0;
}