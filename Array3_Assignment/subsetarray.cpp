#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[] = {2, 4, 3, 5, 5, 6, 7, 3, 4, 8, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int n;
    cout << "Enter the number of elements of array2:";
    cin >> n;
    int arr2[n];
    cout << "Enter the " << n << " elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int i;
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < size; j++)
        {
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == size)
        {
            cout << "arr2 is not subset of arr1";
            break;
        }
    }
    if (i == n)
    {
        cout << "arr2 is the subset of arr1:";
    }
}