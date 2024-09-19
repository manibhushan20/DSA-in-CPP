#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << char(i + 64);
    }
    cout << endl;
    int nsp = 1;
    int m = n - 1;
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << char(a + 64);
            a++;
        }

        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            a++;
        }
        nsp += 2;

        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << char(a + 64);
            a++;
        }
        cout << endl;
    }
}