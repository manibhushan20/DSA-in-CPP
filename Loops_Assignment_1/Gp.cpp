#include <iostream>
using namespace std;
int main()
{
    // 3 12 48...........
    int n;
    cout << "Enter the number:";
    cin >> n;
    int a = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a *= 4;
    }
}