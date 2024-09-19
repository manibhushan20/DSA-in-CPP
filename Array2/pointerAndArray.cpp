#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 7, 2};
    int *ptr = arr;
    cout << ptr << endl
         << &ptr[0] << endl;
    ptr[0] = 8;
    for (int i = 0; i <= 4; i++)
    {
        cout << ptr[i] << " ";
    }
}
