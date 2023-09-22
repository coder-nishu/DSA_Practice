#include <stdio.h>
void print(double *a, int n)
{
    // int n = sizeof(a)/sizeof(int);
    printf("array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%lf\t", a[i]);
    }
    printf("\n");
}
void swap(double *a, double *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
void bubblesort(double weight[], double profit[], int n)
{
    double p2w[n];
    for (int i = 0; i < n; i++)
    {
        p2w[i] = profit[i] / weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (p2w[j - 1] < p2w[j])
            {
                swap(&p2w[j - 1], &p2w[j]);
                swap(&weight[j - 1], &weight[j]);
                swap(&profit[j - 1], &profit[j]);
            }
        }
    }
}
double knapsack(double weight[], double profit[], double max_w, int n)
{
    double rem = max_w, tp = 0, fraction;
    for (int i = 0; i < n; i++)
    {
        if (rem >= weight[i])
        {
            rem -= weight[i];
            tp += profit[i];
        }
        else
        {
            fraction = rem/weight[i];
            tp += (fraction*profit[i]);
            break;
        }
    }
    return tp;
}
int main()
{
    double weight[] = {2, 3, 5, 7, 1, 4, 1};
    double profit[] = {10, 5, 15, 7, 6, 18,3};
    float max_w = 15;
    int n = 7;
    bubblesort(weight, profit, n);
    double p = knapsack(weight,profit,max_w,n);
    printf("%lf",p);
    return 0;
}