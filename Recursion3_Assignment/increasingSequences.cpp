#include <iostream>
#include <vector>
using namespace std;

void seq(int arr[], int n, int idx, vector<int> ans, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {
            for (int i = 0; i < k; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    seq(arr, n, idx + 1, ans, k);
    ans.push_back(arr[idx]);
    seq(arr, n, idx + 1, ans, k);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter the size of sequences:";
    cin >> k;
    vector<int> v;
    seq(arr, n, 0, v, k);
}