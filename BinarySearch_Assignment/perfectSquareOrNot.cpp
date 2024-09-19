#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (n == mid * mid)
        {
            flag = true;
            break;
        }
        else if (n < mid * mid)
            hi = mid - 1;
        else
            lo = mid + 1;
    }

    if (!flag)
        cout << "No";
    else
        cout << "Yes";
}