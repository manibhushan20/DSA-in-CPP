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
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
            flag = false;
    }
    if (flag == true)
    {
        cout << "sorted array!";
    }
    else
        cout << "unsorted array!";
}