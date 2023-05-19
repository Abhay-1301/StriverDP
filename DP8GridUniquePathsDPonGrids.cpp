#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
    vector<vector<int>> path(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                path[i][j] = 1;
            }
            else if (j == 0)
            {
                path[i][j] = 1;
            }
            else
            {
                path[i][j] = path[i][j - 1] + path[i - 1][j];
            }
        }
    }
    return path[m - 1][n - 1];
}

int main()
{
    cout << uniquePaths(4, 5);
    return 0;
}