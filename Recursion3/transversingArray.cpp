#include <iostream>
#include<vector>
using namespace std;

void traverse(int arr[], int currIndex, int n)
{
    if (currIndex == n)
        return;
    cout << arr[currIndex] << " ";
    traverse(arr, currIndex + 1, n);
}

void traverse2(vector<int> &v, int idx)
{
    if (idx == v.size())
        return;
    cout << v[idx] << " ";
    traverse2(v, idx + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = 10;
    traverse(arr, 0, 10);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = arr[i];
    }
    cout << endl;
    traverse2(v, 0);
}