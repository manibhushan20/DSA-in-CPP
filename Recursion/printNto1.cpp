#include <iostream>
using namespace std;
void print(int n)
{
    // base case
    if (n == 0)
        return;
    cout << n << " ";

    // recursive case
   print(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    print(n);
}