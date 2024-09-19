#include <iostream>
#include <string>
using namespace std;

void removeChar(string ans, string original)
{
    if (original.length() == 0)
    {
        cout << ans;
        return;
    }
    char ch = original[0];
    if (ch == 'a')
        removeChar(ans, original.substr(1));
    else
        removeChar(ans + ch, original.substr(1));
}

void removeChar2(string ans, string original, int currIndex)
{
    if (currIndex == original.length())
    {
        cout << ans;
        return;
    }
    char ch = original[currIndex];
    if (ch == 'h')
        removeChar2(ans, original, currIndex + 1);
    else
        removeChar2(ans + ch, original, currIndex + 1);
}

int main()
{
    string str = "Manibhushan Singh";
    removeChar("", str);
    cout << endl;
    removeChar2("", str, 0);
}