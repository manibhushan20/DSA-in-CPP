#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter the length of rectangle:";
    cin >> l;
    int b;
 cout << "Enter the  of rectangle:";
    cin >> b;
    int area = l * b;
    int perimeter = 2 * (l + b);
    if (area > perimeter)
    {
        cout << "Area of rectangle is grater than its perimeter.";
    }
    else
    {
        cout << "perimeter of rectangle is grater than its area.";
    }
}