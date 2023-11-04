#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    while(1)
    {
        while(i<high && arr[i]<pivot)
            i++;
        while(j>low && arr[j]>pivot)
            j--;
        if(i>=j)
        {
            break;
        }
        else
        {
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[j],&arr[low]);
    return j;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot=partition(arr,low,high);
        quickSort(arr,low,pivot);
        quickSort(arr,pivot+1,high);
    }
}


void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]= {4,5,2,1,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1;
    printf("Before sorting : ");
    printArray(arr,n);
    printf("After  sorting : ");
    quickSort(arr,low,high);
    printArray(arr,n);
    return 0;
}