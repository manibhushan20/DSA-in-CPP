#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    cout << max << " " << smax;
}