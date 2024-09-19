#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main()
{
    // string str = "ManibhushanKumar";
    // cout << str.size() << endl;
    // str.push_back('K');
    // cout << str << endl;
    // str.pop_back();
    // cout << str<<endl;
    // str = "Mr."+str + "singh";
    // cout << str;

    string s = "abcdef";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
}