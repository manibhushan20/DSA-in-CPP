#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
using namespace std;

int dp[105][105][2];
int AdjBC(int n, int k, bool last)
{
    if (n == 0)
        return 0;
    if (n == 1)
    {
        if (k == 0)
            return 1;
        else
            return 0;
    }

    if (dp[n][k][last] != -1)
        return dp[n][k][last];
    int ans = 0;
    if (last)
        ans = AdjBC(n - 1, k, 0) + AdjBC(n - 1, k - 1, 1); // because last bit is 1.
    else
        ans = AdjBC(n - 1, k, 0) + AdjBC(n - 1, k, 1); // because last nit is 0.

    return dp[n][k][last] = ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int i, n, k;
        cin >> i >> n >> k;
        memset(dp, -1, sizeof(dp));
        cout << i << " " << AdjBC(n, k, 1) + AdjBC(n, k, 0) << endl;
    }
}