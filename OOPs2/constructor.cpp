#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bike {
public:
    static int noOfBikes;  // Corrected the syntax error (changed ":" to ";")
    int tyreSize;
    int engineSize;

    // Constructor
    Bike(int tyreSize, int engineSize) {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout << "Constructor call hua!" << endl;
    }

    // Destructor
    ~Bike() {
        cout << "Destructor call hua!!" << endl;
    }

    static void increaseNoOfBikes() {
        noOfBikes++;
    }
};

int Bike::noOfBikes = 10;

int main() {
    // Creating objects of the Bike class
    Bike TVS(12, 30);
    Bike honda(23, 40);
    TVS.increaseNoOfBikes();  // Corrected the function name
    cout<<TVS.noOfBikes<<endl;
    cout << "Number of Bikes: " << Bike::noOfBikes << endl;
    cout << "Honda Tyre Size: " << honda.tyreSize << endl;
    cout << "Honda Engine Size: " << honda.engineSize << endl;
    cout << "TVS Tyre Size: " << TVS.tyreSize << endl;
    cout << "TVS Engine Size: " << TVS.engineSize << endl;

    return 0;
}
