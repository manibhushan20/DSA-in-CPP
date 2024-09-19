#include<iostream>
using namespace std;

class book{
    public:
           char name;
           int price;
           int noOfpages;
    public:
       int countBooks(int p){
        if(price<p) return 1;
        else return 0;
       }
     int isBookPresent(char book)  {
        if(name==book) return true;
        else return false;
     } 
};

int main(){
   book  HarryPotter;   
 HarryPotter.name='H';
 HarryPotter.price=1000;
 HarryPotter.noOfpages=500;

 cout<<HarryPotter.countBooks(200)<<endl;
 cout<<HarryPotter.isBookPresent('H');
}
