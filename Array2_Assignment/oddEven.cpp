#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            arr[i] += 10;
        else
            arr[i] *= 2;
    }
    cout << "The changed array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}