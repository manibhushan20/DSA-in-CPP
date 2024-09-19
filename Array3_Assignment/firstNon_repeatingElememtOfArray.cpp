#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 4, 1, 4, 7};
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        int j;
        // Checking if ith element is present in array
        for (j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
                break;
        }
        if (j == n)
        {
            cout << arr[i];
        }
    }
    return 0;
}

// For each element at index i, the inner loop (with variable j) is used to check if arr[i] is present elsewhere in the array.

// If i is not equal to j (ensuring that we are not comparing the element with itself) and arr[i] is equal to arr[j], it breaks out of the inner loop.

// After the inner loop finishes, it checks if j reached the value of n. If j is equal to n, it means that no duplicates of arr[i] were found in the array, and it prints arr[i], which is the first non-repeating element.