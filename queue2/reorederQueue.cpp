#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reorder(queue<int> &q)
{
    stack<int> st;
    for (int i = 0; i <= q.size() / 2; i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
    }

    for (int i = 0; i <= (q.size() - q.size() / 2); i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // reverse the queue
    while (q.size() > 0)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size() > 0)
    {
        q.push(st.top());
        st.pop();
    }
}

void display(queue<int> &q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reorder(q);
    display(q);
}