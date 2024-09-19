#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(5);

    display(v);
    //reverse(v.begin(), v.end());
    int i = 0;
    int j = v.size() - 1 ;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    display(v);

}