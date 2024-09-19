#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    int x = 3;
    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
            idx = i;
    }
    cout << idx;
}
