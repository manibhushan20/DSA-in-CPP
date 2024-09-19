#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {2, 3, 7, 8, 9, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    for (int i = 0; i < n - k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }
        if (maxSum < sum)
        {
            maxSum = sum;
            maxIdx = i;
        }
    }
    cout << maxSum << endl << maxIdx;
}