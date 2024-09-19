#include<iostream>
using namespace std;

int reverse(int num, int revNum=0){
 if(num==0){
    return  revNum;
 }
    int q;
    q=num%10;
    num=num/10;
    revNum=revNum*10 + q;
    reverse(num, revNum);
}
int main(){
    int num=123450;
 cout<<reverse(num);
}