#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows of matrix: ";
    cin >> m;
    cout << "Enter number of columns of matrix: ";
    cin >> n;

    int arr[m][n];
    cout << "Enter the " << n * m << " elements of array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //     // Spiral Traversal
    //     cout << endl << "The spiral output of given matrix is: ";
    //     int minr = 0, minc = 0;
    //     int maxr = m - 1, maxc = n - 1;

    //     while (minr <= maxr && minc <= maxc)
    //     {
    //         // Right
    //         for (int j = minc; j <= maxc; j++)
    //         {
    //             cout << arr[minr][j] << " ";
    //         }
    //         minr++;

    //         // Down
    //         for (int i = minr; i <= maxr; i++)
    //         {
    //             cout << arr[i][maxc] << " ";
    //         }
    //         maxc--;

    //         // Left
    //         if (minr <= maxr) // Check if there are remaining rows
    //         {
    //             for (int j = maxc; j >= minc; j--)
    //             {
    //                 cout << arr[maxr][j] << " ";
    //             }
    //             maxr--;
    //         }

    //         // Up
    //         if (minc <= maxc) // Check if there are remaining columns
    //         {
    //             for (int i = maxr; i >= minr; i--)
    //             {
    //                 cout << arr[i][minc] << " ";
    //             }
    //             minc++;
    //         }
    //     }

    //     return 0;
    // }

    // spiral
    cout << endl
         << "The spiral output of given matrix is:";
    int minc = 0, minr = 0;
    int maxc = n - 1, maxr = m - 1;
    int tne = m * n;
    int count = 0;
    while (minc <= maxc && minr <= maxr)
    {
        // right
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;

        // down
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;

        // left
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;
        // up
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;
    }
}