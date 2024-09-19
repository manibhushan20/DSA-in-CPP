#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    int hcf = 1;
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
            break;
        }
    }
   cout<<hcf;
}
int main()
{
    int a, b;
    cout << "Enter 1st number:";
    cin >> a;
    cout << "Enter the 2nd number:";
    cin >> b;
    gcd(a, b);
}