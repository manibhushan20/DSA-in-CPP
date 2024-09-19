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
        for (int k = i; k >= 1; k--)
        {
            cout << char(64 + k);
        }
        for (int m = 1; m <= i - 1; m++)
        {
            cout << char(65 + m);
        }
        cout << endl;
    }
}