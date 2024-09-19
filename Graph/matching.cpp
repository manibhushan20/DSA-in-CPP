#include <iostream>
#include <vector>
using namespace std;
#define mod 10000000007;

int f(int i, int mask, int n, vector<vector<int>> c){
    for(int w=1;w<=n;w++){
         bool available=
    }
}


int main()
{
    int n;
    cin >> n;
    vector<vector<int>> c(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>c[i][j];
        }
    }
    f(1, (1<<n)-1,n, c);
}