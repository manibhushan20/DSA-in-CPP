#include <iostream>
using namespace std;
// for square matrix
int main()
{
    int m;
    cout << "Enter number of rows and coliumns:";
    cin >> m;

    int arr[m][m];
    cout << "Enter the " << m * m << " elements of array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The given matrix is:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of given array is:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < m; j++)
        {
            // if (i < j)
            // {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
        //     }
         }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
