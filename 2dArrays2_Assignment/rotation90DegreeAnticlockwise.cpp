#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows/columns: ";
    cin >> n;

    int arr[n][n];
    cout << "Enter the matrix elements: ";

    // Input matrix elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }



//transpose

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

//90 degree anticlockwise
//swap column

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n / 2; i++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[n - i - 1][j];
            arr[n - i - 1][j] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}