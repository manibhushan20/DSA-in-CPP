// #include <iostream>
// using namespace std;

// void reverse(int arr[], int currIdx, int n)
// {
//     if (currIdx == n)
//         return;
//     reverse(arr , currIdx + 1, n);
//     cout << arr[currIdx] << " ";
// }

// int main()
// {
//     int arr[] = {1, 4, 7, 24, 6, 8, 32};
//     reverse(arr, 0, 7);
// }

#include <iostream>
#include<vector>
using namespace std;
void printElementsInReverse(vector<int> &arr, int currIndex, int n)
{
    if (currIndex == n)
    {
        return;
    }
    printElementsInReverse(arr, currIndex + 1, n);
    cout << arr[currIndex] << " ";
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    printElementsInReverse(arr, 0, n);
    return 0;
}