#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int number = i;
        while (number > 0)
        {
            int lastdigit = number % 10;
            sum += lastdigit * lastdigit * lastdigit;
            number = number / 10;
        }
        if (i == sum)
        {
            cout << sum << " ";
        }
    }
}
