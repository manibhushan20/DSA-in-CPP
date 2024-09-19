#include <iostream>
using namespace std;

class A {
private:
    int a_ka_private;
protected:
    int a_ka_protected;
public:
    int a_ka_public;
};

class B : virtual public A {
public:
    int b_ka_public;
};

class C : virtual public A {
public:
    int c_ka_public;
};

class D : public B, public C {
public:
    int d_ka_public;
};

int main() {
    D objD;
    
    // Input
    objD.a_ka_public = 1;
    objD.b_ka_public = 2;
    objD.c_ka_public = 3;
    objD.d_ka_public = 4;

    // Output
    cout << "a_ka_public: " << objD.a_ka_public << endl;
    cout << "b_ka_public: " << objD.b_ka_public << endl;
    cout << "c_ka_public: " << objD.c_ka_public << endl;
    cout << "d_ka_public: " << objD.d_ka_public << endl;

    return 0;
}
