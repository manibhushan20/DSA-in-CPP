#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str = "abcba";
    int n = str.length(); // Declare the variable 'n' and assign the length of the string to it
    vector<string> ans;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ans.push_back(str.substr(i, j - i + 1)); // Use substr to extract the substring
        }
    }

    // Print the elements of the vector
    for (int i=0;i<ans.size();i++) {
        cout << ans[i]<< " ";
    }

    return 0;
}
