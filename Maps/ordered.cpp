#include <iostream>
#include <set>
#include <map>
using namespace std;
int main()
{
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(7);
    // for (int ele : s)
    // {
    //     cout << ele << " ";
    // }
      map<int, int> m;
    //   mp["Ram"]=3;
    //   mp["shyam"]=2;
    m[2]=30;
    m[3]=10;
    m[1]=20;

    for (auto x : m)
    {
        cout << x.first << " "<<x.second <<endl;
    }
}
