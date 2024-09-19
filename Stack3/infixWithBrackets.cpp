#include <iostream>
#include <stack>
using namespace std;

int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}

int main()
{
    string s = "(2+6)*4/8-3";
    stack<int> val; // stack for vals
    stack<char> op; // stack for operations
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            val.push(s[i] - '0'); // Convert char to int
        }
        else
        {
            if (op.size() == 0)
                op.push(s[i]);
            else if (s[i] == '(')
                op.push(s[i]);
            else if (op.top() == '(')
                op.push(s[i]);
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {

                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if (prio(s[i]) > prio(op.top()))
                op.push(s[i]);

            else
            {
                while (!op.empty() && prio(s[i]) <= prio(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (!op.empty())
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top() << endl;
    cout << (2 + 6) * 4 / 8 - 3;
}
