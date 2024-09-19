#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int reduce(int n)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    return 1 + min(reduce(n - 1), min((n % 2 == 0) ? reduce(n / 2) : INT_MAX, (n % 3 == 0) ? reduce(n / 3) : INT_MAX));
}

int reduceTopDown(int n, vector<int> &dp)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + min(reduceTopDown(n - 1, dp), min((n % 2 == 0) ? reduceTopDown(n / 2, dp) : INT_MAX, (n % 3 == 0) ? reduceTopDown(n / 3, dp) : INT_MAX));
}

int reduceBottomUp(int n, vector<int> &dp)
{
    if (n == 1)
        dp[1] = 0;
    if (n == 2 || n == 3)
    {
        dp[2] = 1;
        dp[3] = 1;
    }

    for (int i = 3; i < n; i++)
    {
        dp[i] = 1 + min(dp[n - 1], min((n % 2 == 0) ? dp[n / 2] : INT_MAX, (n % 3 == 0) ? dp[n / 3] : INT_MAX));
    }

    return dp[n];
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "Number of steps using recursion:";
    cout << reduce(n) << endl;
    vector<int> dp(n + 1, -1);
    cout << "Number of steps using top down DP:";
    cout << reduceTopDown(n, dp) << endl;
    cout << "Number of steps using bottom up DP:";
    cout << reduceBottomUp(n, dp) << endl;
}
