#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    stack<int> st; // stores the index previous greater element
    int ans[n];
    ans[0] = 1;
    st.push(0);
    for (int i = 1; i <= n - 1; i++)
    {
        while (st.size() > 0 && arr[st.top()] <= arr[i])
            st.pop();
        ans[i] = i - st.top();
        st.push(i);
    }

    //print the answer
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
