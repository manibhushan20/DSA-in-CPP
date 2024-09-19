#include <iostream>
using namespace std;
void gun()
{
    cout << "Hello Mank" << endl;
}
void greet(int n)
{
    if (n == 0)
        return;
    cout << "Good Morning." << endl;
    cout << "How are you?" << endl;
    gun();
    greet(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    greet(n);
}