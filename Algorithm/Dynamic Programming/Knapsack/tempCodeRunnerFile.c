int max_profit(int weight[], int profit[], int max_w, int n)
{
    int table[n + 1][max_w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= max_w; j++)
        {
            if (i == 0 || j == 0)
            {
                table[i][j] = 0;
            }
            else if (j < weight[i - 1])
            {
                table[i][j] = table[i - 1][j];
            }
            else
            {
                table[i][j] = (profit[i-1] + table[i - 1][j - weight[i - 1]]);
                
                if (table[i][j] < table[i - 1][j])
                {
                    table[i][j] = table[i-1][j];
                }
            }
                
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= max_w; j++)
        {
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
    
    return table[n][max_w];
}
