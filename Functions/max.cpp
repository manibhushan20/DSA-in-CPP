#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
    if (a > b && b > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
        return c;
}
int main()
{
    int a, b, c;
    cout << "Enter a , b amd c:";
    cin >> a >> b >> c;
    cout << max(a, b, c);
}