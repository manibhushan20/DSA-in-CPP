#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(4);//1 2
    v.push_back(2);//2 2
    v.push_back(5);//3 4
    v.push_back(7);//4 4
    v.push_back(6);//5 8
    v.push_back(7);//6 8
    v.push_back(6);//7 8
    v.push_back(1);//8 8
    v.push_back(45);//9 16
    v.push_back(7);
    v.push_back(9);
    v.push_back(5);
    v.push_back(7);
    cout << "The size is:" << v.size() << endl;
    cout << "The capacity is:" << v.capacity() << endl;
}