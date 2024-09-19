#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int target;
    cout << "Enter the target:";
    cin >> target;
    int lo = 0;
    int hi = 8;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
        {
            cout << mid;
            break;
        }
        else if (arr[mid] < target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
}