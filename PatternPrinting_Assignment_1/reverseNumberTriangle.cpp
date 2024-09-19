#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a--;
        }

        cout << endl;
    }
}