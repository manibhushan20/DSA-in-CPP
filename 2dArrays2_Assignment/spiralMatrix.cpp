#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows/columns of matrix:";
    cin >> n;
    int arr[n][n];
    int element = 1;

    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = n * n;
    int count = 0;
    while (minr <= maxr && minc <= maxc)
    {

        // right
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            arr[minr][j] = element;
            element++;
            count++;
        }
        minr++;

        // down
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            arr[i][maxc] = element;
            element++;
            count++;
        }
        maxc--;

        // left
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            arr[maxr][j] = element;
            element++;
            count++;
        }
        maxr--;
        // up
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            arr[i][minc] = element;
            element++;
            count++;
        }
        minc++;
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