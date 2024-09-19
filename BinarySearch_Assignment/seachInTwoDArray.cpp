#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target;
    cout << "Enter the target:";
    cin >> target;
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        int lo = 0;
        int hi = 3;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[i][mid] == target)
            {
                flag = true;
                break;
            }
            else if (arr[i][mid] > target)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
    }
    if (flag)
        cout << true;
    else
        cout << false;
}