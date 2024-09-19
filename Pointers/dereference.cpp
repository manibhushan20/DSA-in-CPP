#include <iostream>
using namespace std;
int main()
{
    // int x=122;
    // int *p=&x;
    // cout<<*p;
    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout << *ptr << ' ' << a << ' ' << b;
}