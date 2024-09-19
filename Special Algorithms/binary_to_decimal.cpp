#include<iostream>
using namespace std;

int binTOdec(string &binary){
    int n=binary.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch=binary[i];
        int num=ch-'0';
        result+=num*(1<<(n-i-1));
    }
    return result;
}


int main(){
    string str="1011";
    cout<<binTOdec(str);
}