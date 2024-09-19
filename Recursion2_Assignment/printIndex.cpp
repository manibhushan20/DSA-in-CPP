#include <iostream>
#include <vector>
using namespace std;

int indexOfArray(vector<int> &arr, int currIndex, int n, int key)
{
    if (currIndex == n)
        return -1;
    if (arr[currIndex] == key)
        return currIndex;
    indexOfArray(arr, currIndex + 1, n, key);
}

int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target";
    cin >> target;
    cout << indexOfArray(arr, 0, n, target);
}