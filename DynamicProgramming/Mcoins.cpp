#include <iostream>
#include <vector>
using namespace std;
// google mcoins coin game//spoj
int main()
{
    int k, l, m;
    // m->number of games
    cin >> k >> l >> m;

    string str = "";

    vector<bool> dp(1000005);
    dp[1] = 1;
    dp[k] = 1;
    dp[l] = 1;
    for (int i = 2; i <= 1000005; i++)
    {
        if (i == k || i == l)
            continue;
        dp[i] = !(dp[i - 1] && ((i - l >= 1) ? dp[i - l] : 1) && ((i - k >= 1) ? dp[i - k] : 1));
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (dp[x])
            str += "A";
        else
            str += "B";
    }
    cout << str;
}
