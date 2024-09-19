#include <iostream>
#include <vector>

int firstOccurrence(const std::vector<int> &nums, int target)
{
    int lo = 0;
    int hi = nums.size() - 1;
    int result = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (nums[mid] == target)
        {
            result = mid;
            hi = mid - 1; // Continue searching on the lo side for the first occurrence
        }
        else if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(const std::vector<int> &nums, int target)
{
    int lo = 0;
    int hi = nums.size() - 1;
    int result = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (nums[mid] == target)
        {
            result = mid;
            lo = mid + 1; // Continue searching on the hi side for the last occurrence
        }
        else if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    return result;
}

int countOnes(const std::vector<int> &binaryArray)
{
    int firstOne = firstOccurrence(binaryArray, 1);

    // If no 1 is found, return 0
    if (firstOne == -1)
    {
        return 0;
    }

    int lastOne = lastOccurrence(binaryArray, 1);

    // Calculate the count based on the first and last occurrences
    return lastOne - firstOne + 1;
}

int main()
{
    // Example usage:
    std::vector<int> binaryArray = {0, 0, 1, 1, 1, 1, 1, 1, 1, 1}; // Replace this with your sorted binary array
    int onesCount = countOnes(binaryArray);

    std::cout << "Total number of 1's in the binary array: " << onesCount << std::endl;

    return 0;
}
