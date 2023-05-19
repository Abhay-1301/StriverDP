- Tabulation - Bottum Up
- Memoization - Top Down

- Memoization (T.C. & S.C.) -> Tabulation (T.C. & S.C.) -> Space Optimization

- Overlapping Subproblem -> Memoization tend to store value in some dp array or map -> Make an array dp[n+1].
- If dp[n] != -1 return dp[n].

- Tabulation means to go from base case to required. Initialize dp[0] = 0 , dp[1] = 1. Find Recursion relation. dp[i] = dp[i-1] + dp[i-2].
- curr = prev + prev2; prev2 = prev; prev = curr; cout << prev.

- Problem in term or index
- do everything on that index , sum , min , etc
- 