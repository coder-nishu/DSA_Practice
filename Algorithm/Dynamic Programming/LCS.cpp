#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    int m, n;
    char str1[100], str2[100];
    strcpy(str1, "president");
    strcpy(str2, "providence");

    // cout << "Enter First String:" << endl;
    // cin >> str1;
    // cout << "Enter Second String:" << endl;
    // cin >> str2;

    m = strlen(str1);
    n = strlen(str2);

    // table
    int tab[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                tab[i][j] = 0;
            }
            else
            {
                if (str1[i - 1] == str2[j - 1])
                {
                    tab[i][j] = tab[i - 1][j - 1] + 1;
                }
                else
                    tab[i][j] = max(tab[i - 1][j], tab[i][j - 1]);
            }
        }
    }

    // printarray
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << tab[i][j] << "  ";
        }
        cout << endl;
    }
    int x = tab[m][n];
    cout << "The LCS is: " << x << endl;

    // backtrack
    char subSeq[x];
    subSeq[x] = '\0';
    int i = m, j = n, k = x - 1;
    while (tab[i][j] != 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            subSeq[k--] = str1[i - 1];
            i--;
            j--;
        }
        else if (tab[i - 1][j] >= tab[i][j - 1])
        {
            i--;
        }
        else
            j--;
    }
    cout << "Sub-Sequence is:" << subSeq << endl;
    return 0;
}
