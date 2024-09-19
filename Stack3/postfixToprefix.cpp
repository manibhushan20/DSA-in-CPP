#include <iostream>
#include <stack>
using namespace std;
  //postfix to infix
string solve(string val1, string val2, char ch)
{
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}

int main()
{
    string s = "79+4*8/3-";
    stack<string> val; // stack for vals

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            val.push(to_string(s[i] - '0')); 
        }
        else
        {
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
}