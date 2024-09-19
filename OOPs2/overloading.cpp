#include<iostream>
using namespace std;

class Calculate {
public:
    int a;
    int b;

    void area(int l, int b) {
        cout << l * b << endl;
    }

    void area(int a) {
        cout << a * a << endl;
    }

    void area(double r) {
        cout << 3.14 * r * r << endl;
    }
};

int main() {
    Calculate calculator;

    calculator.area(3, 4);
    calculator.area(5);
    calculator.area(3.2);

    return 0;
}
