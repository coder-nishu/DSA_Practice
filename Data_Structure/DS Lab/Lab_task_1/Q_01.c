#include <stdio.h>
void counting_even_odd(int arr[], int arr2[][3], int n)
{
    int c1_e = 0, c1_o = 0, c2_e = 0, c2_o = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            c1_e++;
        }
        else
            c1_o++;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr2[i][j] % 2 == 0)
            {
                c2_e++;
            }
            else
                c2_o++;
        }
    }
    printf("For 1D Array,Total even is:%d & odd is:%d\n", c1_e, c1_o);
    printf("For 2D Array,Total even is:%d & odd is:%d\n", c2_e, c2_o);
}
void print_multipleOf_5_10(int arr[], int arr2[][3], int n)
{
    int c1_e = 0, c1_o = 0, c2_e = 0, c2_o = 0;
    printf("\t\t ***1D ARRAY***\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0 && arr[i] % 10 == 0)
        {
            printf("%d at index %d of 1D Array is multiple of 5 & 10.\n",arr[i],i);
        }
    }
     printf("\t\t ***2D ARRAY***\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr2[i][j] % 5 == 0 && arr2[i][j] % 10 == 0)
            {
                printf("%d at index %dx%d of 2D Array is multiple of 5 & 10.\n",arr2[i][j]);
            }
        }
    }
}
void sum_diag_nondiag(int arr2[][3]){
    int sum_diag=0,non_diag=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==j)
            {
                sum_diag+=arr2[i][j];
            }
            else
                non_diag+=arr2[i][j];
        }
    }
    printf("The sum of diagonal number:%d",sum_diag);
    printf("The sum of non-diagonal number:%d",non_diag);
}
int main()
{
    int n;
    printf("Enter how many element in 1D array:");
    scanf("%d", &n);
    int arr[n], arr2[3][3];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for 1D array index %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for 2D array index %dx%d:", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The 1D Array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nThe 2D array is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n\t***Ques-2\n***");
    counting_even_odd(arr, arr2, n);
    printf("\n\t***Ques-3***\n");
    print_multipleOf_5_10(arr, arr2, n);
    printf("\n\t***Ques-4***\n");
    sum_diag_nondiag(arr2);
    return 0;
}