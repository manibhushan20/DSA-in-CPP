#include <iostream>
using namespace std;

// Function to find the first occurrence of target in a row
int firstOccurance(int arr[], int size, int target)
{
    int lo = 0;
    int hi = size - 1;
    int result = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            hi = mid - 1;
        }
        else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return result;
}

// Function to find the last occurrence of target in a row
int lastOccurance(int arr[], int size, int target)
{
    int lo = 0;
    int hi = size - 1;
    int result = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            lo = mid + 1;
        }
        else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return result;
}

// Function to count the number of ones in a row
int countOnes(int arr[], int size, int target)
{
    int firstIndex = firstOccurance(arr, size, target);
    if (firstIndex == -1)
        return 0;
    int lastIndex = lastOccurance(arr, size, target);
    return lastIndex - firstIndex + 1;
}

int main()
{
    int arr[4][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int maxOnes = 0;
    for (int i = 0; i < 4; i++)
    {
        int n = countOnes(arr[i], 4, 1); // Pass the size of the array explicitly
        if (n > maxOnes)
            maxOnes = i;
    }
    cout << maxOnes; // Output the correct variable
    return 0;
}
