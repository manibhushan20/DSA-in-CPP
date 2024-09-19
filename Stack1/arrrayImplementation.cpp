#include <iostream>
// #include<stack>
using namespace std;

class Stack
{

public:
    int arr[5];
    int idx = -1;
    Stack(){
        idx=-1;
    }
    void push(int val)
    {
        if(idx==4){
            cout<<"Stack is full";
            return;
        }
        idx++;
        arr[idx] = val;
    }
   void pop(){
     if(idx==-1){
            cout<<"Stack is empty!";
            return;
        }
    idx--;
   }

    int top(){
         if(idx==-1){
            cout<<"Stack is empty!";
            return -1;
        }
        return arr[idx];
    }

     int size()
    {
        return idx + 1;
    }

        void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.display();
}