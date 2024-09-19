#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int x = 5;
    int y = 8;
    swap(&x, &y);
    cout << &x << endl;
    cout << x << " " << y;
}