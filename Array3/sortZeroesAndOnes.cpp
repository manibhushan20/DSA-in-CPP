#include <iostream>
#include <vector>
using namespace std;
void sort01(vector<int> &v)
// {
//     int n = v.size();
//     int NoO = 0;
//     int NoZ = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == 0)
//             NoZ++;
//         else
//             NoO++;
//     }
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (i < NoZ)
//             v[i] = 0;
//         else
//             v[i] = 1;
//     }
// }

{

    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == 0)
            i++;
        if (v[j] == 1)
            j--;
        if (i > j)
            break;
        if (v[i] == 1 && v[j] == 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort01(v);
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}