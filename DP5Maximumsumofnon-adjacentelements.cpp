#include <bits/stdc++.h>
using namespace std;

int maximumNonAdjacentSum(vector<int> &nums)
{
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    dp[1] = nums[1];
    dp[2] = dp[0] + nums[2];
    for (int i = 3; i < nums.size(); i++)
    {
        dp[i] = std::max(dp[i - 2], dp[i - 3]) + nums[i];
    }
    return *max_element(dp.begin(), dp.end());
}

int main()
{
    vector<int> nums = {1, 2, 3, 1, 3, 5, 8, 1, 9};
    cout << maximumNonAdjacentSum(nums);
    return 0;
}