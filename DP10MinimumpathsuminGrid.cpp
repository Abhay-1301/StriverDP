#include <bits/stdc++.h>
using namespace std;

int minSumPath(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }
            else if (i == 0)
            {
                grid[i][j] = grid[i][j] + grid[i][j - 1];
            }
            else if (j == 0)
            {
                grid[i][j] = grid[i][j] + grid[i - 1][j];
            }
            else
            {
                grid[i][j] = grid[i][j] + min(grid[i - 1][j], grid[i][j - 1]);
            }
        }
    }
    return grid[m - 1][n - 1];
}

int main()
{
    int m = 3;
    int n = 4;
    vector<vector<int>> grid(m, vector<int>(n, 0));
    grid = {{5, 9, 6},
            {11, 5, 2}};
    cout << minSumPath(grid);
    return 0;
}