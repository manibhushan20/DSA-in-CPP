#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<vector<int>> dp;

int f(int i, int j, vector<int> &arr)
{
    if (i == j || i + 1 == j)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = INT_MAX;

    for (int k = i + 1; k < j; k++)
    {
        ans = min(ans, f(i, k, arr) + f(k, j, arr) + arr[i] * arr[j] * arr[k]);
    }

    return dp[i][j] = ans;
}

int bottomUp(int n, vector<int> &arr)
{
    dp.resize(n, vector<int>(n, 0));

    for (int len = 2; len < n; len++) // chain length from 2 to n-1
    {
        for (int i = 0; i + len < n; i++)
        {
            int j = i + len;
            dp[i][j] = INT_MAX;

            for (int k = i + 1; k < j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + arr[i] * arr[j] * arr[k]);
            }
        }
    }

    return dp[0][n - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    dp.clear();
    dp.resize(n, vector<int>(n, -1)); // resize for recursive function
    cout << "Recursive: " << f(0, n - 1, v) << "\n";
    dp.clear();
    dp.resize(n, vector<int>(n, 0)); // resize for bottom-up function
    cout << "Bottom-Up: " << bottomUp(n, v) << "\n";
}
