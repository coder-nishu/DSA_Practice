#include<stdio.h>
void insertionSort(int *arr,int n)
{
    for(int i=1; i<5; i++)
    {
        int temp=arr[i];
        int hole=i;
        while(hole>=0 && arr[hole-1]>temp)
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=temp;
    }
}
void print_array(int *arr,int n){
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]= {75,86,17,52,14,28};
    int n=sizeof(arr)/sizeof(int);
    printf("Before Sorting the array is:\n");
    print_array(arr,n);
    insertionSort(arr,n);
    printf("After Sorting the array is:\n");
    print_array(arr,n);

   
    return 0;
}