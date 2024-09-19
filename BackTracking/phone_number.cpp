#include <bits/stdc++.h>
using namespace std;
 
void backtrack(string& digits, int index, string curr, vector<string>& res, unordered_map<char, string>& map) {
    if (index == digits.length()) {
        res.push_back(curr);
        return;
    }
   
    char digit = digits[index];
    string letters = map[digit];
   
    for (char c : letters) {
        curr.push_back(c);
        backtrack(digits, index + 1, curr, res, map);
        curr.pop_back();
    }
}
 
vector<string> letterCombinations(string digits) {
    vector<string> res;
    if (digits.length() == 0) {
        return res;
    }
    unordered_map<char, string> map = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    string curr = "";
    backtrack(digits, 0, curr, res, map);
    return res;
}
 
int main() {
    string digits = "34";
    vector<string> result = letterCombinations(digits);
    for (string s : result) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}