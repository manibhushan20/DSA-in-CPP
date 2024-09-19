#include<iostream>
using namespace std;
int main() {
    int arr[]={23,45,67,34,54,73};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    //sorting
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

cout<<"The fouth smallest element is:"<<arr[k-1];


}