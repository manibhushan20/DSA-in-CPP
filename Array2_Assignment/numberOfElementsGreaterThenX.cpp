#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number to be compared:";
    cin >> x;
    int n;
    cout << "Enter the number of elements of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x < arr[i])
        {
            count++;
        }
    }
    cout << count << " elements sre greater than "<<x;
}