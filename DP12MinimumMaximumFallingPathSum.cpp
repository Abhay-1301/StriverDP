#include <bits/stdc++.h>
using namespace std;

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                matrix[i][j] = matrix[i][j] + max(matrix[i - 1][j], matrix[i - 1][j + 1]);
            }
            else if (j == n - 1)
            {
                matrix[i][j] = matrix[i][j] + max(matrix[i - 1][j], matrix[i - 1][j - 1]);
            }
            else
            {
                matrix[i][j] = matrix[i][j] + max(max(matrix[i - 1][j - 1], matrix[i - 1][j]), matrix[i - 1][j + 1]);
            }
        }
    }
    return *max_element(matrix[m - 1].begin(), matrix[m - 1].end());
}

int main()
{

    return 0;
}