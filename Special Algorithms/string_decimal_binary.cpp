#include<iostream>
using namespace std;

string decTObin(int num){
    string result="";
    while(num > 0){
        if(num%2==0)
        result='0'+result;
     else
        result='1'+result;

        num=num/2;
    }
    return result;
}


int main(){
    int num=11;
    cout<<decTObin(num);
}