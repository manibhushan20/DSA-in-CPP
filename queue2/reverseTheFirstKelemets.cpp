#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

void display(queue<int> &q)
{

    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        q.push(x);
    }
    cout<<endl;
}

void reverseFirstK(queue<int> &q, int k)
{
    stack<int> st;
    int n=q.size();
    int m=k;
    while (m)
    {
        int x = q.front();
        st.push(x);
        q.pop();
        m--;
    }

    while (st.size() > 0)
    {
        int x = st.top();
        q.push(x);
        st.pop();
    }

   for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
   }
}

int main()
{
    stack<int> st;
    queue<int> q;
    int k = 3;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverseFirstK(q, k);
    display(q);
}