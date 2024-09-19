#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// vector<int> nextPermutation(vector<int> &arr)
// {
//     int n = arr.size();
//     int idx = -1;
//     for (int i = n-2; i >= 0; i--)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             idx = i;
//             break;
//         }
//     }
//     if (idx == -1)
//     {
//         reverse(arr.begin(), arr.end());
//     }
//     reverse(arr.begin() + idx + 1, arr.end());
//     int j = -1;
//     for (int i = idx + 1; i < n; i++)
//     {
//         if (arr[i] > arr[idx])
//         {
//             j = i;
//         }
//     }
//     int temp = arr[idx];
//     arr[idx] = arr[j];
//     arr[j] = temp;
//     return arr;
// }

vector<int> nextPermutation(vector<int> &arr)
{
    int n = arr.size();
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        int j = n - 1;
        while (arr[j] <= arr[idx])
        {
            j--;
        }
        swap(arr[idx], arr[j]);
        reverse(arr.begin() + idx + 1, arr.end());
    }

    return arr;
}

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(2);
    display(arr);
    vector<int> v = nextPermutation(arr);
    display(v);
}