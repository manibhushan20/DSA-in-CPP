#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string:";
    cin >> str;
    for (int i = 1; i < str.length(); i++)
    {
        if (i % 2 != 0)
        {
            str[i] = '#';
        }
    }
    cout << str;
}