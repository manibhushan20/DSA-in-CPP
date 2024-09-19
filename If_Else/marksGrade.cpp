#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks obtained";
    cin>>marks;
    if(marks>=90){
        cout<<"Excellent";
    }
    else if(marks>=80){
        cout<<"Very Good";
    }
      else if(marks>=80){
        cout<<"Very Good";
    }
      else if(marks>=70){
        cout<<" Good";
    }
      else if(marks>=60){
        cout<<"Needs improvement";
    }
      else if(marks>=50){
        cout<<"poor";
    }
    else{
        cout<<"Fail";
    }
}