#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    display(st);
    cout << x << " ";
    st.push(x);
}

int main()
{
    stack<int> s1;
    stack<int> s2;
    int n;
    cout << "Enter the number of element to be inserted in stack:";
    cin >> n;
    cout << "Enter the " << n << " elements of stack:";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    int pos;
    cout << "Enter the position of element to be removed from top:";
    cin >> pos;

    int i = 1;
    while (s1.size() != 0)
    {
        if (i != pos)
            s2.push(s1.top());
        s1.pop();
        i++;
    }
    while (s2.size() != 0)
    {
        s1.push(s2.top());
        s2.pop();
    }

    display(s1);
}