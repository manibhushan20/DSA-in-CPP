#include <iostream>
#include <string>
using namespace std;

void decToBi(int n, string str)
{
    if (n == 0)
    { for(int i=str.length();i>=0;i--)
        cout << str[i];
        return;
    }
    int remainder = n % 2;
    n = n / 2;
    str += to_string(remainder);
    return decToBi(n, str);
}


int main()
{
    int n;
    cout << "Enter the decimal number:";
    cin >> n;
    decToBi(n, "");
}