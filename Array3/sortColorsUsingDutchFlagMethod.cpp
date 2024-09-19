#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &v)
{
    int n = v.size();
    int lo = 0;
    int mid = 0;
    int hi = n - 1;

    while (mid < hi)
    {
        if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if (v[mid] == 0)
        {
            int temp = v[mid];
            v[mid] = v[lo];
            v[lo] = temp;
            lo++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
    }
}
void display(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);

    display(v);
    cout << endl;
    sortColors(v);
    display(v);
}
