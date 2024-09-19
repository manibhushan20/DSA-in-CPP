#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {2, 3, 5, 6, 9, 13, 15, 19, 22};
    int lo = 0;
    int hi = 8;
    bool flag = false;
    int target;
    cout << "Enter the target:";
    cin >> target;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target)
        {
            flag = true;
            cout << arr[mid - 1];
            break;
        }
        else if (arr[mid] > target)
            hi = mid - 1;
        else if (arr[mid] < target)
            lo = mid + 1;
    }
    if (flag == false)
    {
        cout << arr[hi];
    }
}