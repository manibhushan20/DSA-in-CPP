#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()  {
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int n=s.length();
    cout<<"The first half reversed string is:";
    reverse(s.begin()+0, s.begin()+n/2);
    cout<<s;
}