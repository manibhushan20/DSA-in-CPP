#include <iostream>
using namespace std;

class MinHeap
{
public:
    int arr[50];
    //vector<int>arr;
    int idx;
    MinHeap()
    {
        idx = 1;
    }
    //   MinHeap(int x)
    // {
    //     idx = 1;
    // for(int i=1;i<=x;i++){
    //     arr.push_back(0);
    // }
    // }
    int top()
    {
        return arr[1];
    }
    void push(int x)
    {
        arr[idx] = x; // Insert the new element at the end of the heap array.
        int i = idx;  // Set the index 'i' to the index of the newly inserted element.
        idx++;        // Increment the index for the next insertion.

        // Rebalance the heap by swapping the newly inserted element with its parent
        // until the heap property is satisfied.
        while (i != 1) // Continue until we reach the root of the heap (index 1).
        {
            int parent = i / 2;            // Calculate the index of the parent node.
            if (arr[i] < arr[parent])      // If the newly inserted element is smaller than its parent,
                swap(arr[i], arr[parent]); // Swap the elements.
            else                           // If the heap property is satisfied,
                break;                     // Exit the loop.

            i = parent; // if (if statement) runs Update the index to the parent index for further checking.
        }
    }

    void pop()
    {
        idx--;
        arr[1] = arr[idx];
        // rearrangement
        int i = 1;
        while (true)
        {
            int left = 2 * i, right = 2 * i + 1;
            if (left > idx - 1)
                break;
            if (right > idx - 1)
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                break;
            }
            if (arr[left] < arr[right])
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
            }
            else
            {
                if (arr[i] > arr[right])
                {
                    swap(arr[i], arr[right]);
                    i = right;
                }
            }
        }
    }

    int size()
    {
        return idx - 1;
    }

    void display()
    {
        for (int i = 1; i <= idx - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    MinHeap pq;
   //  MinHeap pq(25);
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    pq.display();
}
