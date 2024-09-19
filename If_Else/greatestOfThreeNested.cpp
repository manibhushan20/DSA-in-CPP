#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the 1st number:";
    cin >> a;
    cout << "Enter the 2nd number:";
    cin >> b;
    cout << "Enter the 3rd number:";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the greatest.";
        }
        else
        {
            cout << c << " is the greatest.";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the greatest.";
        }
        else
        {
            cout << c << " is the greatest.";
        }
    }
}