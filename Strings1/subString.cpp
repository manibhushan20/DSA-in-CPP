#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abcdefg";
    // s.substr(idx,len);
    cout << s.substr(2, 2) << endl;
    cout << s.substr(2)<<endl;
    int n = s.length();
    cout << s.substr(n / 2);
}