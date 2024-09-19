#include <iostream>
using namespace std;
int digitsFun(int n)
{
    int i = 0;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}
int squarefun(int i)
{
    return i * i;
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "Number of digits in given number is:" << digitsFun(n)<<endl;;
    cout << "The square of number of digits is:" << squarefun(digitsFun(n));
}