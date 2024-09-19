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
    int row = 0;
    int maxSum=0 ;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            row = i + 1;
        }
    }
    cout << "The row number " << row << " has maximum sum:" << maxSum;
}