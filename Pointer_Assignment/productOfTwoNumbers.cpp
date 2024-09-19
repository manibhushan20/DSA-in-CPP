#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 6;
    int *p1 = &a;
    int *p2 = &b;
    cout << "Product is:" << *p1 * (*p2);
}