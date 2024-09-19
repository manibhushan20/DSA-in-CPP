#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string:";
    cin >> str;
    reverse(str.begin() + str.length()/2, str.end());
    cout << str;
}