#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout << "Enter the year:";
    cin >> yr;
    if (yr % 4 == 0 && (yr % 400 == 0 || yr % 100 != 0))
    {
        cout << yr << " is a leap year";
    }
    else
    {
        cout << yr << " is not a leap year";
    }
}