#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    int mid = n / 2 + 1;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a <<" ";
            a++;
        }
        cout << endl;
    }
    cout << endl;
}