#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

    string removeDuplicates(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (st.size() != 0 && st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        string str = "";
        while (st.size() != 0) {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }

    int main(){
        string s="aaabbbcddaffg";
        cout<<s<<endl;
        s=removeDuplicates(s);
        cout<<s<<endl;
    }