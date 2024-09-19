#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {12, 19, 23, 8, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    vector<int> v(n, 0);
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }

    cout << endl
         << "After Operation:";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}