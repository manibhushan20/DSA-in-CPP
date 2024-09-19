#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // int x=12345;
    //     string str = to_string(x);
    //     cout << str;
    string s;
    cin >> s;
    int x = 0;
    for (int i = 0; i < s.length(); i++)
    {
        x *= 10;
        x += (s[i] - 48);
    }
    cout << x;
}