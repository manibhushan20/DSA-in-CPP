#include <iostream>
using namespace std;
int main()
{
    // first array
    int m;
    cout << "Enter number of rows of first matrix:";
    cin >> m;
    int n;
    cout << "Enter number of columns of first matrix:";
    cin >> n;

    // second array
    int p;
    cout << "Enter the number of rows of second matrix:";
    cin >> p;
    int q;
    cout << "Enter the number of columns of second matrix";
    cin >> q;

    if (n == p)
    {
        int arr1[m][n];
        cout << "Enter the " << n * m << " elements of first array:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr1[i][j];
            }
        }

        int arr2[p][q];
        cout << "Enter the " << p * q << " elements of second array:" << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> arr2[i][j];
            }
        }

        // matrix multiplication
        int res[m][q];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += arr1[i][k] + arr2[k][j];
                }
            }
        }

        cout << "The resultant matrix is:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        cout << "Matrices cannot be multiplied";
    }
}
