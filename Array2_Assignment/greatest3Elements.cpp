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
    int max1 = arr[0];
    int max2 = arr[0];
    int max3 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
        {
            max3 = arr[i];
        }
    }
    cout << max1 << " " << max2 << " " << max3;
}
