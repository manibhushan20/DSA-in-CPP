// Given an array of integers, print a sum triangle using recursion from it such that the first level has
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]

#include <iostream>
#include <vector>
using namespace std;

void arrayTriangle(int arr[], int n)
{
    if (n == 0)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i] + arr[i + 1];
        cout << arr[i] << " ";
    }
    cout << endl;
    arrayTriangle(arr, n - 1);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arrayTriangle(arr, n);
}