#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// bottom up approach
int coinChange(vector<int> &coins, int amount)
{
    vector<int> dp(1000005, -1);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        int res = INT_MAX;
        for (int j = 0; j < coins.size(); j++)
        {

            if (i - coins[j] < 0)
                res = min(res, INT_MAX);
            else
                res = min(res, dp[i - coins[j]]);
        }
        if (res == INT_MAX)
            dp[i] = INT_MAX;
        else
            dp[i] = 1 + res;
    }
    if (dp[amount] == INT_MAX)
        return -1;
    return dp[amount];
}

int topDown(vector<int> &coins, int n, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MAX;
    if (dp[n] != -1)
        return dp[n];
    int res = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        res = min(res, topDown(coins, n - coins[i], dp));
    }
    if (res == INT_MAX)
        return dp[n] = res;
    else
        return dp[n] = 1 + res;
}

int main()
{
    int n;
    cin >> n;
    int amount;
    cin >> amount;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        coins[i] = x;
    }
    vector<int> dp(1000005, -1);
    int result = topDown(coins, amount, dp);
    if (result == INT_MAX)
        cout << -1;
    else
        cout << result;
}