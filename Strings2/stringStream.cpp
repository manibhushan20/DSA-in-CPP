#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string str = "Manibhushan will ba a good coder:";
    stringstream ss(str);
    string temp;

    while (ss >> temp)
    {
        cout << temp << endl;
    }
}