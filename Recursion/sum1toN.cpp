#include <iostream>
using namespace std;
void sum1toN(int sum, int n)
{
    if (n == 0)
    {
        cout << sum;
        return;
    }
    sum1toN(sum + n, n - 1);
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    sum1toN(0, n);
}