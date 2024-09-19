#include <iostream>
#include <vector>
#include<climits>
#include<algorithm>
using namespace std;

int minProduct(vector<int> &arr)
{
    int noz = 0; // zero
    int non = 0; // negative
    int nop = 0; // positive
    int prodPos = 1;
    int prodNeg = 1;
    int largestNeg = INT_MIN;
    for (auto ele : arr)
    {
        if (ele == 0)
            noz++;
        else if (ele > 0)
        {
            nop++;
            prodPos *= ele;
        }
        else
        {
            non++;
            prodNeg *= ele;
            largestNeg = max(largestNeg, ele);
        }
    }

    if (non == 0)
    {
        if (noz > 0)
            return 0;
        else
        {
            auto it = min_element(arr.begin(), arr.end()); // give minElement
            return *it;
        }
    }
    else
    {
        if (non % 2 == 0)
        { // even negatives
            return (prodNeg / largestNeg) * prodPos;
        }
        else
        { // odd negatives
            return prodNeg * prodPos;
        }
    }
}

int main()
{
    vector<int> arr{-2, -3, 1, 4, -2};
    cout << minProduct(arr) << endl;
}