#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n);
    int i = n - 1;
    int j = m - 1;
    int k = (m + n) - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            res[k] = arr1[i];
            i--;
        }
        else
        {
            res[k] = arr2[j];
            j--;
        }
        k--;
    }
    if (i == -1)
    { // if all the elements of arr1 has ended
        while (j >= 0)
        {
            res[k] = arr2[j];
            j--;
            k--;
        }
    }
    if (j == -1)
    { // if all the elements of arr2 has ended
        while (i >= 0)
        {
            res[k] = arr1[i];
            i--;
            k--;
        }
    }
    return res;
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
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(9);
    display(arr1);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(8);
    arr2.push_back(10);
    display(arr2);
    vector<int> arr3 = merge(arr1, arr2);
    display(arr3);
}