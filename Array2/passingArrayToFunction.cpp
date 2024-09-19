#include <iostream>
using namespace std;
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

void change(int b[], int size)
{
    b[0] = 100;
}

int main()
{
    int arr[5] = {1, 4, 5, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    change(arr, size);
    display(arr, size);
}