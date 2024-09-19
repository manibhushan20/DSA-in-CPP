#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &v)
{
    int noZ = 0;
    int noO = 0;
    int noT = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            noZ++;
        if (v[i] == 1)
            noO++;
        if (v[i] == 2)
            noT++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < noZ)
            v[i] = 0;
        else if (i < noO + noZ)
            v[i] = 1;
        else
            v[i] = 2;
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