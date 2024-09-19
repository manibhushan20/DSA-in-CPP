#include <iostream>
using namespace std;
void fun(int x, int y)
{
    cout << "Adress of fun x " << &x << endl;
    cout << "Adress of fun y " << &y << endl;
}
int main()
{
    int x;
    int y;
    cout << "address of main x " << &x << endl;
    cout << "address of main y " << &y << endl;
    fun(x,y);
}