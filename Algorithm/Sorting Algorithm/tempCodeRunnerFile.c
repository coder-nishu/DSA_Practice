
#include <stdio.h>
void merge(int a[], int b[], int n, int m, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i < n - 1 && j < m - 1)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < n - 1)
    {
        c[k++] = a[i++];
    }
    while (j < m - 1)
    {
        c[k++] = b[j++];
    }
}
void print(int *a,int n)
{
    //int n = sizeof(a)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4}, b[] = {5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);
    int c[m + n];
    merge(a, b, n, m, c);
    print(c,m+n);
    return 0;
}