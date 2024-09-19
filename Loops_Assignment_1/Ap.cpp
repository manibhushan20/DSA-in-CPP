#include <iostream>
using namespace std;
int main()
{
    // 4 7 10 13.......
    int n;
    cout << "Enter the number:";
    cin >> n;
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a += 3;
    }
}