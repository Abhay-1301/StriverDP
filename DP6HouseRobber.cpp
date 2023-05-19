#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll houseRobber(vector<int> &nums)
{

    if (nums.size() == 1)
    {
        return nums[0];
    }
    ll max1, max2;
    vector<int> temp = nums;
    vector<ll> dp(nums.size() - 1, 0);
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (i == 0 || i == 1)
        {
            dp[i] = nums[i];
        }
        else if (i == 2)
        {
            dp[i] = dp[i - 2] + nums[i];
        }
        else
        {
            dp[i] = std::max(dp[i - 2], dp[i - 3]) + nums[i];
        }
    }
    max1 = *max_element(dp.begin(), dp.end());

    nums = temp;
    nums.erase(nums.begin());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0 || i == 1)
        {
            dp[i] = nums[i];
        }
        else if (i == 2)
        {
            dp[i] = dp[i - 2] + nums[i];
        }
        else
        {
            dp[i] = std::max(dp[i - 2], dp[i - 3]) + nums[i];
        }
    }
    max2 = *max_element(dp.begin(), dp.end());
    return std::max(max1, max2);
}

int main()
{
    vector<int> valueInHouse{1, 7, 14, 21, 13};
    cout << houseRobber(valueInHouse);
    return 0;
}