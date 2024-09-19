#include <iostream>
using namespace std;

int mini(int x, int y)
{
    int a;
    if (x < y)
        a = x;
    else
        a = y;
    return a;
}

int main()
{
    cout << mini(23, 56);
}