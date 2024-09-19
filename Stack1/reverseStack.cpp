#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    stack<int> gt;
    stack<int> rt;
    vector<int>v;
 // empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        v.push_back(st.top());
        st.pop();
    }

    //empty gt into rt
     while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }

    //empty rt back into st
    // while(rt.size()>0){
    //     st.push(rt.top());
    //     cout<<st.top()<<" ";
    //     rt.pop();
    // }
    // cout<<endl;

    //using vector
    cout<<"Reverse stack printed in reverse order:"<<endl;
    for(int i=0;i<v.size();i++){
        st.push(v[i]);
         cout<<st.top()<<" ";
    }

}