#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;

    // //printing in reverse order
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }


    //we will use extra space
    cout<<"Stack in reverse order:"<<endl;
      stack<int>temp;
      while(st.size()>0){
        cout<<st.top()<<" ";
      temp.push(st.top());
        st.pop();
    }
   cout<<endl;
    //putting elements back from temp to st
    cout<<"Stack in original order:"<<endl;
    while(temp.size()>0){
        st.push(temp.top());
        cout<<st.top()<<" ";
        temp.pop();
    }
}