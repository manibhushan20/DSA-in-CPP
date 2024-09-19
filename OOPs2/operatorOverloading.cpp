#include <iostream>
using namespace std;

class complexNumber {
public:
    int imaginary;
    int real;

    complexNumber operator+(const complexNumber &c2) {
        complexNumber result;
        result.imaginary = imaginary + c2.imaginary;
        result.real = real + c2.real;
        return result;
    }
};

int main() {
    complexNumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;
    a2.imaginary = 4;
    a2.real = 7;

    // complexNumber a3;
    // a3.real=a1.real + a2.real;
    // a3.imaginary=a2.imaginary + a2.imaginary;


    complexNumber a3 = a1 + a2;

    cout << "Real: " << a3.real << " " << "Imaginary: " << a3.imaginary << endl;
}
