#include<iostream>
using namespace std;
int main()  {
    char str[6]={'a','b','c','d','e'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
  cout<<endl<<(int)(str[5])<<endl;
  cout<<str<<endl;
}