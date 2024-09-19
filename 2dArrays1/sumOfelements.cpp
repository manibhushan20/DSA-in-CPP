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
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "The sum of elements of given matrix is:" << sum;
}
