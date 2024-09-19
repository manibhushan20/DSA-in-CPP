#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 5};
    int lo = 0;
    int hi = 7;
    int target = 4;
    bool flag = false;
    
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target)
        {
            flag = true;
            if (mid == hi || arr[mid + 1] != target)
            {
                cout << mid;
                break;
            }
            else
                lo = mid + 1;
        }
        else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    
    if (flag == false)
        cout << -1;

    return 0;
}
