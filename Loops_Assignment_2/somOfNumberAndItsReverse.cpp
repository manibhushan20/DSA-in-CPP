#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int reverse = 0;
    int lastDigit = 0;
    int number = n;
    while (n > 0)
    {
        reverse *= 10;
        lastDigit = n % 10;
        reverse += lastDigit;
        n = n / 10;
    }
    cout << "The reverse of given number is " << reverse << endl;
    cout << "The sum of number and its reverse is " << number + reverse;
}