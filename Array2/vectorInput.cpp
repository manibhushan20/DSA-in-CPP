#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout<<"Enter the vector:";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i]<<" ";
    }
}
