// coding excs-62: Bulbs
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n, vector<int> a)
// {

//     int turn = 0, ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (turn == 0 && a[i] == 0)
//         {
//             turn ^= 1;
//             ans++;
//         }
//         if (turn == 1 && a[i] == 1)
//         {
//             turn ^= 1;
//             ans++;
//         }
//     }
//     return ans;
// }

// coding excs-63:Minimum Number of Taps to Open
// accepted in leetcode but not on udemy
#include <bits/stdc++.h>
using namespace std;

int minTaps(int n, vector<int> ranges)
{
    vector<int> dp(n + 1, n + 7); // minimum no of taps to required to water garden from 0 to i

    dp[0] = 0;

    for (int i = 0; i <= n; i++)
    {
        int leftReach = max(0, i - ranges[i]);
        for (int j = max(0, i - ranges[i]); j <= min(i + ranges[i], n); j++)
        {
            dp[j] = min(dp[j], dp[leftReach] + 1);
        }
    }

    return dp[n] == n + 7 ? -1 : dp[n];
}