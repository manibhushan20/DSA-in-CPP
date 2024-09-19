#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elemente of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int product=1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout << "The product of elements of array is:" << product;
}