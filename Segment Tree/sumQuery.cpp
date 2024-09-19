#include<iostream>
#include <vector>
#include <climits>
 using namespace std;

vector<int> st;

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
    if (l > hi || r < lo)
        return 0; // Out of range
    if (lo >= l && hi <= r)
        return st[i]; // Current segment is completely within range

    int mid = lo + (hi - lo) / 2;
    int leftSum = getSum(2 * i + 1, lo, mid, l, r); // Query left child
    int rightSum = getSum(2 * i + 2, mid + 1, hi, l, r); // Query right child

    return leftSum + rightSum; // Return sum of left and right subtree sums
}


int main()
{
    int arr[] = {1, 4, 2, 8, 6, 4, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    st.resize(4 * n);

    buildTree(arr, 0, 0, n - 1);

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cout << "Enter the range:";
        cin >> l >> r;
        cout << getSum(0, 0, n - 1, l, r) << endl;
    }
}
