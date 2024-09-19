#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    int m;
    cout << "Enter number of columns:";
    cin >> m;
    int arr[n][m];
    cout << "Enter the " << n * m << " elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Transpose of given array is:" << endl;
    // for (int j = 0; j < m; j++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // storing transpose in new matrix
    int t[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << t[i][j]<<" ";
        }
        cout<<endl;
    }
}

