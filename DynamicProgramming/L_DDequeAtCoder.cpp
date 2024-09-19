#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

ll solve(int arr[], int i, int j, vector<vector<ll>> &dp)
{
    if (i == j)
        return arr[i];
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = max(arr[i] - solve(arr, i + 1, j, dp), arr[j] - solve(arr, i, j - 1, dp));
}

ll fbu(int arr[], int n, vector<vector<ll>> &dp)
{
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = arr[i];
    }

    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n-len; i++)
        {
            int j = i + len - 1;
            dp[i][j] = max(arr[i] - dp[i + 1][j], arr[j] - dp[i][j - 1]);
        }
    }
    return dp[0][n-1];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<ll>> dp(3005, vector<ll>(3005, -1));
    // cout << solve(arr, 0, n - 1, dp);
    cout << fbu(arr, n, dp);
    return 0;
}