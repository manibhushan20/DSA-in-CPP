#include <bits/stdc++.h>
using namespace std;

bool f(vector<int>& arr, int target, int idx, int product)
{
    if (product == target)
    {
        return true;
    }
    if (idx == arr.size() || product > target)
        return false;
    
    for (int i = idx; i < arr.size(); i++)
    {
        product *= arr[i];
        if (f(arr, target, i + 1, product))
            return true;
        product /= arr[i];
    }
    return false;
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> target;

    cout << f(arr, target, 0, 1) << endl;
    return 0;
}