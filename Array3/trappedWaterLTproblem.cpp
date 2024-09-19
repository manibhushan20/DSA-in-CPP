#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    // prev greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
            max = height[i];
    }

    
    // next greatest element array

    prev[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (max < prev[i])
            prev[i] = max;
        if (max < height[i])
            max = height[i];
    }

    // calculating water
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (height[i] < prev[i])
        {
            water += (prev[i] - height[i]);
        }
    }
    return water;
}

   
//best optimal two pointer solution
    int trap(vector<int>& height) {
        int n = height.size();
       
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;

        while (left <= right) {
                
            if (height[left] <=height[right]) {
                      //processing left side
                if (leftMax <= height[left])
                      leftMax = height[left];
                else
                    water += leftMax - height[left];
                left++;

            } else {
                  //processing right side
                if (rightMax<= height[right])
                    rightMax = height[right];
                else
                    water += rightMax - height[right];
                right--;
            }
        }

        return water;
    }

int main()
{
    vector<int> arr = {3, 2, 0, 3, 2, 4};
    cout << trap(arr);
}
