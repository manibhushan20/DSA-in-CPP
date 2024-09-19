#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, -4, 0, 3, 26, 1, 99, -80};
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // optimise bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    cout << endl
         << "the sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}