#include <iostream>
using namespace std;
int main()
{
    string str = "Manibhushan";
    int i = 0;
    while (str[i] != '\0')
    {
        if (i % 2 == 0)
        {
            str[i] = 'a';
        }
        i++;
    }
    cout << str;
}