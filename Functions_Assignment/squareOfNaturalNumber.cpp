#include<iostream>
using namespace std;
void squareFun(int n){
    for(int i=1; i<=n;i++)
    {
        cout<<i*i<<endl;
        
    }
}
int main()  {
    int n;
    cout<<"Enter the number:";
    cin>>n;
   squareFun(n);
}