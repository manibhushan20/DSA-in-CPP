#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << char(64 + k);
        }
        cout << endl;
    }
}