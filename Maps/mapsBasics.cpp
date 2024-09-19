#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> mp;
    pair<string, int> p1;
    p1.first = "Manibhushan";
    p1.second = 73;
    pair<string, int> p2;
    p2.first = "Shivam";
    p2.second = 36;
    pair<string, int> p3;
    p3.first = "Sonu";
    p3.second = 66;
    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    mp["Ankita"] = 78;
    mp["sachin"] = 72;
    for (pair<string, int> p : mp) // auto is used in general
    {
        cout << p.first << " " << p.second << endl;
    }
     cout<<mp.size()<<endl;
    cout<<endl;
    mp.erase("Ankush");
     cout<<mp.size()<<endl;
    for (auto p : mp) // auto is used in general
    {
        cout << p.first << " " << p.second << endl;
    }
}