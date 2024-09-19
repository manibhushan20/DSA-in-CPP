#include <iostream>
using namespace std;

int areaFun(int r)
{
    return 3.14 * r * r;
}
int main()
{
    int r;
    cout << "Enter the radius:";
    cin >> r;
    cout << "The area is:" << areaFun(r);
}