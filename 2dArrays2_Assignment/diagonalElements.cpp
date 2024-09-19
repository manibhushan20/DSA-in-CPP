#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows/columns: ";
    cin >> n;

    int a[n][n];
    cout << "Enter the matrix elements: ";

    // Input matrix elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Print elements of both diagonals with appropriate spacing
    cout << "Output:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i + j == n - 1))
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
