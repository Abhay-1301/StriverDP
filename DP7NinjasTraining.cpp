#include <bits/stdc++.h>
using namespace std;

int ninjaTraining(int n, vector<vector<int>> &points)
{
    for (int i = 1; i < n; i++)
    {
        points[i][0] = points[i][0] + max(points[i - 1][1], points[i - 1][2]);
        points[i][1] = points[i][1] + max(points[i - 1][0], points[i - 1][2]);
        points[i][2] = points[i][2] + max(points[i - 1][0], points[i - 1][1]);
    }
    return max(points[n - 1][0], max(points[n - 1][1], points[n - 1][2]));
}

int main()
{
    vector<vector<int>> points;
    points = {{10, 50, 1}, {5, 100, 11}};
    cout << ninjaTraining(2, points);
    return 0;
}