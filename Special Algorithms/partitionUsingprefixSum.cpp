#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    bool flag=false;
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]);
        flag=true;
        idx=i;
    }
    if(flag) cout<<"Yes, It can be partitioned at "<<idx;
    else cout<<"It cannot be partitioned.";
}