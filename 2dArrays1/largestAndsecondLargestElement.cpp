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
    // for largest
    int max = arr[0][0];
    int smax = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                smax = max;
                max = arr[i][j];
            }
            else if (smax < arr[i][j] && max != arr[i][j])
            {
                smax = arr[i][j];
            }
        }
    }
    cout << "The largest and second largest element in given matrix is respectively:" << max << " and " << smax;
}
