#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(0);
    v.push_back(4);
    cout << v.size() << endl;
    // garbage   v[1] = 1;
    v.push_back(9);
    cout << v.size() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    // cout << v[0] << " ";
    // cout << v[1] << " ";
    // cout << v[2] << " ";
    // cout << v[3] << " ";
}