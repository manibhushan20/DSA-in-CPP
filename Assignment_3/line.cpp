#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the x and y componenets of first point:";
    cin >> x1 >> y1;
    cout << "Enter the x and y componenets of second point:";
    cin >> x2 >> y2;
    cout << "Enter the x and y componenets of third point:";
    cin >> x3 >> y3;

    float m1 = (y2 - y1) / (x2 - x1);
    float m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        cout << "All three given points lie on the same line.";
    }
    else
    {
        cout << "Given points are non-collinear.";
    }
}