#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int lastDigit = 0;
    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        lastDigit = n % 10;
        r += lastDigit;
        n /= 10;
    }
    cout << r;
}