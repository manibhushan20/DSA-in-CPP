#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[5]);
    cout << size;
}