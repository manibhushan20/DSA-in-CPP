#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq; // maxHeap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq.push(10);
    pq.push(-20);
    pq.push(0);
    pq.push(-40);
    pq.push(50);

    pq2.push(-40);
    pq2.push(50);
    
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << pq2.top() << endl;
}