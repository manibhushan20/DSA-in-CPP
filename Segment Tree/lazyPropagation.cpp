#include <iostream>
#include <vector>
using namespace std;

vector<int> st, lazy;

void buildTree(int arr[], int i, int lo, int hi)
{
    if (lo == hi)
    {
        st[i] = arr[lo];
        return;
    }
    int mid = lo + (hi - lo) / 2;
    buildTree(arr, 2 * i + 1, lo, mid);
    buildTree(arr, 2 * i + 2, mid + 1, hi);
    st[i] = st[2 * i + 1] + st[2 * i + 2];
}

int getSum(int i, int lo, int hi, int l, int r)
{
    if (lazy[i] != 0)
    {
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize * lazy[i];
        if (lo != hi)
        {
            lazy[2 * i + 1] += lazy[i];
            lazy[2 * i + 2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if (l > hi || r < lo)
        return 0; // Out of range
    if (lo >= l && hi <= r)
        return st[i]; // Current segment is completely within range

    int mid = lo + (hi - lo) / 2;
    int leftSum = getSum(2 * i + 1, lo, mid, l, r);      // Query left child
    int rightSum = getSum(2 * i + 2, mid + 1, hi, l, r); // Query right child

    return leftSum + rightSum; // Return sum of left and right subtree sums
}

void updateRange(int i, int lo, int hi, int l, int r, int val)
{
    if (lazy[i] != 0)
    {
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize * lazy[i];
        if (lo != hi)
        {
            lazy[2 * i + 1] += lazy[i];
            lazy[2 * i + 2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if (l > hi || r < lo)
        return;
    if (lo >= l && hi <= r)
    { // update entire [lo, hi]
        int rangeSize = hi - lo + 1;
        st[i] += rangeSize * val;
        if (lo != hi)
        {
            lazy[2 * i + 1] += val;
            lazy[2 * i + 2] += val;
        }
        return;
    }

    int mid = lo + (hi - lo) / 2;
    updateRange(2 * i + 1, lo, mid, l, r, val);
    updateRange(2 * i + 2, mid + 1, hi, l, r, val);
    st[i] = st[2 * i + 1] + st[2 * i + 2];
}

int main()
{
    int arr[] = {1, 4, 2, 8, 6, 4, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    st.resize(4 * n);
    lazy.resize(4 * n, 0);

    buildTree(arr, 0, 0, n - 1);

    cout << getSum(0, 0, n - 1, 1, 3) << endl;
    updateRange(0, 0, n - 1, 2, 5, 10);
    cout << getSum(0, 0, n - 1, 1, 3) << endl;
}
