#include <iostream>
using namespace std;

int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r)
{
    int ncr = fact(n) / (fact(n - r) * fact(r));
    return ncr;
}

int main()
{
    int n, r;
    cout << "Enter n:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}