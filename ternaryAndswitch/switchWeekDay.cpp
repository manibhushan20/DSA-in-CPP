#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the day number:";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "monday";
        break;

    default:
        cout << "Invalid Number";
    }
}