#include <iostream>
#include <vector>
using namespace std;

void Subset(int arr[], int n, int currIndex, vector<int> v)
{
    if (currIndex == n)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    Subset(arr, n, currIndex + 1, v);
    if (v.size() == 0 || arr[currIndex] == v[v.size() - 1]+ 1)
    {
        v.push_back(arr[currIndex]);
        Subset(arr, n, currIndex + 1, v);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // corrected syntax
    int n = 3;
    vector<int> v;
    Subset(arr, n, 0, v);
    return 0; // added return statement
}
