#include<iostream>
#include<vector>
using namespace std;
int c=0;

int inversion(vector<int> &a, vector<int> &b){
    int count=0, i=0,j=0;
 while(i<a.size() && j<b.size()){
    if(a[i]>b[j]){
        count+=(a.size()-i);
        j++;
    }
    else i++;
 }
 return count;
}

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j=0,k=0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])

            res[k++] = a[i++];

        else
            res[k++] = b[j++];
    }

    if (i == a.size())
    {
        while (j < b.size())
            res[k++] = b[j++];
    }
    if (j == b.size())
    {
        while (i < a.size())
            res[k++] = a[i++];
    }
}

void mergeSort(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i + n1];
    }

    mergeSort(a);
    mergeSort(b);
    c += inversion(a,b);
    merge(a, b, v);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
  cout<<endl;
  mergeSort(v);
  
  cout<<c;

    // //brut force method
    // int count=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]) count++;
    //     }
    // }
 // cout<<count;
}