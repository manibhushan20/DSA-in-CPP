#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int dp[10005][10005];
int N;

int f(vector<int> &aa, vector<int> &ac, int i, int x)
{
    if (i == N)
        return 0;
    if (dp[i][x] != -1)
        return dp[i][x];

    if (x == 0)
    { // assistant is equal to captain
        return dp[i][x] = aa[i] + f(aa, ac, i + 1, x + 1);
    }
    else if (x == N - i)
    { // remaing assistant is equal to number of pilots
        return dp[i][x] = ac[i] + f(aa, ac, i + 1, x - 1);
    }
    else
    {
        return dp[i][x] = min(aa[i] + f(aa, ac, i + 1, x + 1), ac[i] + f(aa, ac, i + 1, x - 1));
    }
}

int main()
{

    int n;
    cin >> n;
    N = n;
    vector<int> aa, ac; // array of assistant, captain
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        ac.push_back(x);
        aa.push_back(y);
    }
    memset(dp, -1, sizeof(dp));
    cout << aa[0] + f(aa, ac, 1, 1);
}