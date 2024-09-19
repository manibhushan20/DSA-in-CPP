#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> st){
    stack<int>temp;
    while(st.size()>0){
      temp.push(st.top());
      st.pop();
    }

    while(temp.size()>0){
        st.push(temp.top());
        cout<<st.top()<<" ";
        temp.pop();
    }
}

void pushAtBottom(stack<int>& st, int val){
     stack<int>temp;
    while(st.size()>0){
      temp.push(st.top());
      st.pop();
    }

    st.push(val);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }


}

void pushAtIndex(stack<int>& st, int idx, int val){
     stack<int>temp;
    while(st.size()>0){
      temp.push(st.top());
      st.pop();
    }

   int i=0;
    while(temp.size()>0){
       if(i==idx)    st.push(val);
        st.push(temp.top());
        temp.pop();
        i++;
    }

}

int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    pushAtBottom(st, 5);
    display(st);
    cout<<endl;
    pushAtIndex(st,2,3);
    display(st);
}