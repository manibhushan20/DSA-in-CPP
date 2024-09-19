#include<iostream>
using namespace std;

class calculator{
    public:
           int a;
           int b;

    void add() {
        cout<<"The sum is:"<<a+b<<endl;
    }
    void subtract() {
         cout<<"The difference is:"<<a-b;
    }
};

int main(){
   calculator calci;     
    calci.a=7;
    calci.b=5;
    calci.add();
    calci.subtract();
}
