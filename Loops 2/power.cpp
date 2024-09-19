#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the base:";
    cin >> a;
    int b;
    cout << "Enter the power:";
    cin >> b;
    bool flag = true;
    if (b < 0)
    {
        flag = false;
        b = -b;
    }
    float power = 1;
    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }
    if (flag == false)
    {
        power = 1 / power;
        b = -b;
    }
    if (a == 0 && b == 0)
        cout << "Not Defined";
    else
        cout << a << " raied to the power " << b << " is " << power;
}