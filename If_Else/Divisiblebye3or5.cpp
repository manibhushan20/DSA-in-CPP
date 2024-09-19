#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    if (n % 5 == 0 || n % 3 == 0)
    {
        cout << "Number is divisible by 3 or 5.";
    }
    else
    {
        cout << "Number is not divisible by 3 or 5.";
    }
}