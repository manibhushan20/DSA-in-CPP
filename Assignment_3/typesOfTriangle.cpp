#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the three sides of triangle:";
    cin >> a>> b >> c;
    if (a == b && b == c && c == a)
    {
        cout << "The given numbers are sides of equilateral triangle";
    }
    if (a != b && b != c && c != a)
    {
        cout << "The given numbers are sides of scalen triangle";
    }
    if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
    {
        cout << "The given numbers are sides of isosceles  triangle";
    }
}
