#include <iostream>
#include <climits>
#include <vector>
#include <cstring>
#define ll long long int
using namespace std;

vector<vector<int>> dp;

int g(vector<int> colors, int i, int j)
{
    int result = 0;
    for (int m = i; m <= j; m++)
    {
        result = (result % 100 + colors[m] % 100) % 100;
    }
    return result;
}

int f(int i, int j, vector<int> &colors)
{
    if (i == j)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int result = INT_MAX;

    for (int k = i; k < j; k++)
    {
        result = min(result, f(i, k, colors) + f(k + 1, j, colors) + g(colors, i, k) * g(colors, k + 1, j));
    }
    return dp[i][j] = result;
}

int fbu(vector<int> &colors)
{

    int n = colors.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            int result = INT_MAX;
            for (int k = i; k < j; k++)
            {
                result = min(result, dp[i][k] + dp[k + 1][j] + g(colors, i, k) * g(colors, k + 1, j));
            }
            dp[i][j] = result;
        }
    }
    return dp[0][n - 1];
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == -1)
            break;

        vector<int> colors(n);
        for (int i = 0; i < n; i++)
            cin >> colors[i];

        dp.clear();
        dp.resize(n, vector<int>(n, -1));

        cout << fbu(colors) << endl;
    }
    return 0;
}