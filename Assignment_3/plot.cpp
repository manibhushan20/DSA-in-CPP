#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the values of x and y coordinates respectively";
    cin >> x >> y;
    cout << "The given coordinates are:" << (x, y)<<endl;
    if (x == 0 && y != 0)
    {
        cout << "The given coordinats lies on the y-axis";
    }
    else if (y == 0 && x != 0)
    {
        cout << "The given coordinats lies on the x-axis";
    }
    else if (x == 0 && y == 0)
    {
        cout << "The given coordinats lies on the origin";
    }
    else
    {
        cout << "The given coordinats lies in the plane of x and y axis.";
    }
}
