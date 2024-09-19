#include <iostream>
using namespace std;

void oddFun(int a, int b)
{
    for (int i = a + 1; i < b; i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
        ;
    }
}
int main()
{
    int a, b;
    cout << "Enter the lower limit:";
    cin >> a;
    cout << "Enter the upper limit:";
    cin >> b;
    oddFun(a, b);
}