#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int lo = 1;
    int hi = nums.size() - 1;

    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        int count = 0;

        // Count the number of elements less than or equal to mid
        for (int num : nums)
        {
            if (num <= mid)
            {
                count++;
            }
        }

        // If the count is greater than mid, the repeated number is in the left half
        if (count > mid)
        {
            hi = mid;
        }
        else
        {
            // Otherwise, it is in the right half
            lo = mid + 1;
        }
    }

    // At this point, lo and hi will point to the repeated number
    return lo;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 3, 4};
    cout << "Output 1: " << findDuplicate(arr1) << endl;

    vector<int> arr2 = {1, 2, 2, 3, 4, 5};
    cout << "Output 2: " << findDuplicate(arr2) << endl;

    return 0;
}
