#include <iostream>
using namespace std;

void defaultValue(int x=5, float y=9.7)
{
    cout << x << " " << y << " ";
}
int main()
{
    int x, y;
    defaultValue(3);
}