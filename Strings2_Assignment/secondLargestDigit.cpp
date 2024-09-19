#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "123456";
    int x = stoi(str);
    int max = 0;
    int smax = 0;
    while (x > 0)
    {
        int val = x % 10;
        x /= 10;
        if (val > max && val > max)
        {
            smax = max;
            max = val;
        }
        else if (smax < val && val != max)
        {
            smax = val;
        }
    }
    cout << "max = " << max << "and second Max = " << smax;
}