#include<bits/stdc++.h>
using namespace std;

void permutations(string str, int i){
    if(i==str.size()) {
        cout<<str<<"\n";
        return;
    }

unordered_set<int>st;
    for(int idx=i;idx<str.size();idx++){

        if(st.count(str[idx])) continue;
        st.insert(str[idx]);
        swap(str[i], str[idx]);
        permutations(str, i+1);
         swap(str[i], str[idx]);
    }
}

int main(){

    permutations("aab", 0);
    return 0;
}