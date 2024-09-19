#include <iostream>
#include <climits>
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

    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (max2 < arr[i] && max1 != arr[i])
        {
            max2 = arr[i];
        }
    }
    if (max2 == INT_MIN)
    {
        cout << "Second element diddn't exist!";
    }

    else
      {
          cout << "The second largest element is:" << max2;
      }
}

    //     int max = arr[0];
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (max < arr[i])
    //         {
    //             max = arr[i];
    //         }
    //     }
    //     int smax = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (smax < arr[i] && arr[i] != max)
    //         {
    //             smax = arr[i];
    //         }
    //     }
    //     cout<<"Second largest element is:"<<smax;
    // }