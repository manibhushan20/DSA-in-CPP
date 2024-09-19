#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str; // novss=number of vowel substring
    int novss = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'o' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            novss++;
            for (int j = i + 1; j < str.length(); j++)
            {
                if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                    novss++;
                else
                    break;
            }
        }
    }
    cout << novss;
}