// Given n as input. Generate all strings that are palindromes with the number of digits as ‘n’. 
//  Where n is the size of the input array. For example a palindrome of size 3 can be 313, 121, 030. 
//  Note it can even contain leading zeros Note: Each index value can be used only once. 
//  Input : n = 2 Output : 00, 11, 22, 33, 44, 55, 66, 77, 88, 99

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    for (int i = 0; i <= n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
            return false;
    }
    return true;
}

void f(int n, string &str)
{
    if (str.length() == n)
    {
        if (isPalindrome(str))
        {
            cout << str << " ";
            return;
        }
        else
            return;
    }

    for (int j = 0; j <= 9; j++)
    {
        str += to_string(j);
        f(n, str);
        str.pop_back();//backtracking
    }
}

void palindrome_of_digits(int n)
{
    string str = "";
    f(n, str);
}

int main()
{
    int n;
    cin >> n;
    palindrome_of_digits(n);
}