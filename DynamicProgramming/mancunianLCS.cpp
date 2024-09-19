#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int M, N;

ll mancunian(int *arr1, int *arr2, int i, int j, int k, vector<vector<vector<int>>> &dp)
{
    if (i >= N || j >= M)
        return 0;

    if (dp[i][j][k] != -1)
        return dp[i][j][k];

    ll res=0;
    if (arr1[i] == arr2[j])
        res = 1 + mancunian(arr1, arr2, i + 1, j + 1, k, dp);
    else
    {
        if (k > 0)
        {
            res =  1 + mancunian(arr1, arr2, i + 1, j + 1, k - 1, dp);
        }
        res = max(res, mancunian(arr1, arr2, i + 1, j, k, dp));
        res = max(res, mancunian(arr1, arr2, i, j + 1, k, dp));
    }

    dp[i][j][k] = res;
    return res;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    N = n;
    M = m;
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, -1)));
    cout << mancunian(arr1, arr2, 0, 0, k, dp);
}