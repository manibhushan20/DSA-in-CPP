#include <iostream>
#include <string>
using namespace std;

class vehicle {
public:
    int tyreSize;
    int engineSize;
    string companyName;
    int lights;
};

class Bike : virtual public vehicle {
public:
    int handleSize;
    void show() {
        cout << "Bike ka show!!" << endl;
    }
};

int main() {
    Bike b;
    vehicle *a;
    a= &b;  // Reference needs to be initialized directly, not separately
    b.show();  // Corrected to call the show function from the Bike object b
}
