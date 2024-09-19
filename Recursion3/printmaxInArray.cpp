#include <iostream>
#include <climits>
using namespace std;

void printMAx(int arr[], int currIndex, int n, int max)
{
    if (currIndex == n)
    {
        cout << max;
        return;
    }
    if (arr[currIndex] > max)
        max = arr[currIndex];
    printMAx(arr, currIndex + 1, n, max);
}

int maxInArray(int arr[], int currIndex, int n)
{
    if (currIndex == n)
        return INT_MIN;
    return max(arr[currIndex], maxInArray(arr, currIndex + 1, n));
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = 10;
    printMAx(arr, 0, n, INT_MIN);
    cout << endl;
    cout << maxInArray(arr, 0, n);
}