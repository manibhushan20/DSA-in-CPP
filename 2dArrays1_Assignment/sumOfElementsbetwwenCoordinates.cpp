#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of rows of matrix:";
    cin >> m;
    int n;
    cout << "Enter the number of columns of matrix:";
    cin >> n;

    cout << "Enter the " << m * n << " elements of array:" << endl;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter the first coordinates:";
    cin >> l1 >> r1;
    cout << "Enter the second coordinates:";
    cin >> l2 >> r2;

    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "The sum of elements between given coordinates is:" << sum;
}