#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int sum = 0;
    int lastDigit = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        sum += lastDigit;
        n /= 10;
    }
    cout << sum;
}