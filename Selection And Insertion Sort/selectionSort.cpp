#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {5, 30, 1, -4, 2};
    int n = 5;
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    // insertion sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int mindx = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}