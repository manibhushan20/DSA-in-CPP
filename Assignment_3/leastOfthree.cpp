#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout << "Enter the marks of three students respectively:";
    cin >> A >> B >> C;
    if (A > B)
    {
        if (B > C)
        {
            cout << " C got the least marks.";
        }
        else
        {
            cout << " B got the least marks.";
        }
    }
    else
    {
        if (A > C)
        {
            cout << " C got the least marks.";
        }
        else
        {
            cout << " A got the least marks.";
        }
    }
}