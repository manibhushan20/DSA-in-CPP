#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the radius:";
    cin >> r;
    float circumference = 3.14 * 2 * r;
    float area = 3.14 * r * r;
    if (circumference > area)
    {

        cout << "Numerically circumference is greater than area of circle.";
    }
    else
    {

        cout << "Numerically circumference is not greater than area of circle.";
    }
}