/*Ques :Given an array, arr[] containing ‘n’ integers, the task is to find an integer (say K) such that afterreplacing each and every
 index of the array by |ai– K| where ( i ∈ [1, n]), results in a sorted array. If no such
integer exists that satisfies the above condition then return -1.
Given array ko kos number se subtract kiya jaaye taaki array sorted order me aa jaaye uss number ka range nikalna hai*/

#include <iostream>
#include <climits>
using namespace std;

float max(float a, float b)
{
    if (a >= b)
        return a;
    else
        return b;
}

float min(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int arr[] = {4, 3, 7};
    int n = 3;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            kmin = max(kmin, (arr[i] + arr[i + 1]) / 2.0);
        }
        else
        {
            kmax = min(kmax, (arr[i] + arr[i + 1]) / 2.0);
        }
        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        cout << -1;
    else if (kmin == kmax)
    {
        if (kmin - (int)kmax == 0)
        {
            cout << "There is only one value of k:" << kmin;
        }
        else
            cout << -1;
    }
    else
    {
        if (kmin - (int)kmin > 0)
        {
            kmin = (int)kmin + 1;
        }
        cout << "Range of k is: [" << kmin << "," << kmax << "]";
    }
}
