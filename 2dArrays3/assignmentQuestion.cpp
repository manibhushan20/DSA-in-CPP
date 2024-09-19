// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[3][3] = {1, 1, 1, 1, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
     int row, column;
    for (int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                row = i;
                column = j;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i == row || j == column)
            {
                arr[i][j] = 0;
            }
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