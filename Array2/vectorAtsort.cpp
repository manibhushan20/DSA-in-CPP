#include <iostream>
#include <vector>
#include <algorithm> // Include the <algorithm> header for sort
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(7);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    // Sorting
    sort(v.begin(), v.end()); // Use the sort function

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}
