#include<iostream>
using namespace std;

class A {
private:
    int a_ka_private;
protected:
    int a_ka_protected;
public:
    int a_ka_public;
};

class B : public A {
public:
    int b_ka_public;
};

class C : public B {
    public:
       int c_ka_public;
};


int main() {
    B b;
    C c;

    c.b_ka_public=45;
  //  b.b_ka_public = 100;
    // b.a_ka_protected = 23;  // Error: 'int A::a_ka_protected' is protected within this context
    b.a_ka_public = 34;

    cout << "c.b_ka_public: " << c.b_ka_public << endl;
    cout << "b.a_ka_public: " << b.a_ka_public << endl;

    return 0;
}
