#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            break;
        }
        if (n == 2 && str[0] != str[1])
        {
            count++;
            break;
        }
        if (i == 0)
        {
            if (str[i] != str[i + 1])
                count++;
        }
      else  if (i == n - 1)
        {
            if (str[i] != str[i - 1])
                count++;
        }
        else if (str[i] != str[i + 1] && str[i] != str[i - 1])
        {
            count++;
        }
    }
    cout << count;
}