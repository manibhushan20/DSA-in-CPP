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

int permutation(int n, int r)
{
    int npr=fact(n) / fact(n - r);
    return npr;
}

int main()
{
    int n, r;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter r:";
    cin >> r;
    cout << combination(n, r)<<endl;
    cout << permutation(n, r);
}