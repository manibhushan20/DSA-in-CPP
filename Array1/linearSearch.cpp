#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value of x";
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            flag = true;
    }
    if (flag == true)
        cout << "Element Found!";
    else
        cout << "Element not found!";
}