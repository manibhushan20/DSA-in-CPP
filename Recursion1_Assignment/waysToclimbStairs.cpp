#include <iostream>
using namespace std;

int climb(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
 if (n == 3)
        return 4;
    return climb(n - 1) + climb(n - 2) + climb(n - 3);
}

int main()
{
    int n;
    cout << "Enter the no. of stairs:";
    cin >> n;
    cout << climb(n);
}