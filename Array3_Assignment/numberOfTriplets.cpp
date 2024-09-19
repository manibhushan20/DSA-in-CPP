#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cout << "Enter the target:";
    cin >> x;
    vector<int> v;
    int n;
    cout << "Enter the number of elements of array:";
    cin >> n;
    cout << "Enter the " << n << " elements of array:";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    for (int i = 0; i < v.size() - 2; i++)
    {
        for (int j = i + 1; j < v.size() - 1; j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                if (v[i] + v[j] + v[k] == x)
                {
                    cout << "( " << i << ", " << j << ", " << k << ")" << endl;
                }
            }
        }
    }

    return 0;
}
