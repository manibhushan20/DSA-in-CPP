#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 1, 5, 5, 2, 3};
    int n = 6;

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    // storing sum of the the sorted array
    int smNum = 0;
    for (int i = 0; i < n; i++)
    {
        smNum *= 10;
        smNum += arr[i];
    }

    // storing second smallest number
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }

    int secSmNum = 0;
    for (int i = 0; i < n; i++)
    {
        secSmNum *= 10;
        secSmNum += arr[i];
    }

    cout << "The sum of smallest and second smallest number is:" << smNum + secSmNum;
    return 0;
}
