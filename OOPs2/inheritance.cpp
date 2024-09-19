#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
        int tyreSize;
        int engineSize;
        string companyName;
        int lights;

 vehicle(){
        cout<<"vehicle ka consturctor call hua!!"<<endl;
    }
};

class car : public vehicle{
   public:
        int steeringSize;

};

class Bike : public vehicle{
    public:
        int handleSize;
        Bike(){
            cout<<"Bike ka consturctor call hua!!"<<endl;
        }
};

int main(){
 Bike honda;
 honda.handleSize=5;
 honda.tyreSize=10;
 honda.engineSize=500;
 cout<<honda.engineSize<<endl;
}
