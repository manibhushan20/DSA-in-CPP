#include<iostream>
using namespace std;

int pivot(int arr[], int startIdx, int endIdx){
    int pivotElement=arr[(startIdx + endIdx)/2];
    int count=0;
    for(int i=startIdx ;i<=endIdx;i++){
        if(i==(startIdx + endIdx)/2) continue;
        if(arr[i]<pivotElement) count++;
    }
    int pivotIdx=count+startIdx;
    swap(arr[pivotIdx],arr[(startIdx + endIdx)/2]);
    int i=startIdx;
    int j=endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

int quickSelect(int arr[], int startIdx, int endIdx, int k){
    int pi=pivot(arr,startIdx,endIdx);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return   quickSelect(arr,pi+1,endIdx,k);
    else return quickSelect(arr,startIdx,pi-1,k);
}

int main(){
    int arr[]={4,5,3,7,9,2,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
   cout<<endl;
   int k=4;
   cout<< quickSelect(arr,0,n-1,k);

}