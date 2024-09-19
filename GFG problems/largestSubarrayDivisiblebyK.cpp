// Input:
// N = 6, K = 3
// arr[] = {2, 7, 6, 1, 4, 5}
// Output:
// 4
// Explanation:
// The subarray is {7, 6, 1, 4} with sum 18, which is divisible by 3.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 7, 6, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int len = 0;
    int maxLen = 0;
    int k = 3;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum % 3 == 0)
            {
                len = j - i + 1;
                maxLen = max(maxLen, len);
            }
        }
    }
    cout << "The maximum length of subarray is:" << maxLen;
}