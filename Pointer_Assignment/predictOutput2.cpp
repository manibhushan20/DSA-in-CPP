#include <iostream>
using namespace std;
int main()
{

    int a = 15, b = 20;
    int *ptr = &a;
    cout << *ptr <<endl;
int  *ptr2= &b;
    *ptr =  *ptr2;
    cout << *ptr << ' ' << *ptr2 << ' ' << b;
}