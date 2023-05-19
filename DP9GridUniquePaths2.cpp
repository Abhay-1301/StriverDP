#include <bits/stdc++.h>
using namespace std;

int mazeObstacles(int m, int n, vector<vector<int>> &mat)
{
    int M = 1000000007;
    vector<vector<int>> path(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                if (mat[i][j] == -1)
                {
                    path[i][j] = 0;
                }
                else
                {
                    path[i][j] = 1;
                }
            }
            else if (j == 0)
            {
                if (mat[i][j] == -1)
                {
                    path[i][j] = 0;
                }
                else
                {
                    path[i][j] = 1;
                }
            }
            else
            {
                if (mat[i][j] == -1)
                {
                    path[i][j] = 0;
                }
                else
                {
                    path[i][j] = path[i][j - 1] + path[i - 1][j];
                }
            }
        }
    }
    return path[m - 1][n - 1] % M;
}

int main()
{

    return 0;
}