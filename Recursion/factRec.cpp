#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==1) return 1;
   //recursive case
    return  n*fact(n-1);
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<fact(n);
}