#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Manibhushan";
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cout << str[i] << " ";
            count++;
        }
        i++;
    }
    cout << endl << count <<endl;
    str[0]='s';
    cout<<str;
    return 0;
}
