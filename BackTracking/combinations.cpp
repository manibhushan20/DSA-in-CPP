#include<bits/stdc++.h>
using namespace std;
 
void backtrack(vector<vector<int>>& ans, vector<int>& curr, int n, int k, int start) {
    if (curr.size() == k) {
        ans.push_back(curr);
        return;
    }
    for (int i = start; i <= n; i++) {
        curr.push_back(i);
        backtrack(ans, curr, n, k, i+1);
        curr.pop_back();
    }
}
vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> ans;
    vector<int> curr;
    backtrack(ans, curr, n, k, 1);
    return ans;
}
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<vector<int>> combinations = combine(n, k);
 
    for (vector<int>& combination : combinations) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }
 
    return 0;
}