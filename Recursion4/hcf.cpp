#include <iostream>
using namespace std;
int hcf(int a, int b)
{
    int r = b % a;
    if (r == 1)
        return 1;
    if (r == 0)
        return a;//T.C=O(log(a+b))
    else
        return hcf(r, a);
}

int gcd(int a, int b)
{
    for (int i = min(a, b); i >= 2; i--)
    {
        if (a % i == 0 && b % i == 0)//T.C=O(min(a,b))
            return i;
    }
    return 1;
}
int main()
{
    int a = 24;
    int b = 60;
    cout << hcf(b, a) << endl << gcd(a, b);
}