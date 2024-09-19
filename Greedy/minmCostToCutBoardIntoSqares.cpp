#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int minimumCostOfBreaking(vector<int> X, vector<int> Y){
       
       //sort in decending order
       sort(X.rbegin(), X.rend());
       sort(Y.rbegin(), Y.rend());
       
       int i = 0, j = 0;
       int hp = 1, vp = 1;
       int tcost = 0;
       while(i < X.size() && j < Y.size()){
           if(X[i] > Y[j]){
               tcost += X[i] * hp; // cutting vertically so use horizontal pieces
               vp++; //and verticall peices will increase
               i++;
           }else{
               tcost += Y[j] * vp; //cutting horizontally we use vertical pieces
               hp++; //and horizontalpeices will increase
               j++;
           }
       }
       while(i < X.size()){
           tcost += X[i] * hp;
               vp++;
            i++;
       }
       while(j < Y.size()){
           tcost += Y[j] * vp;
            hp++;
            j++;
       }
       return tcost;
    }

int main(){
    vector<int> X = {2, 1, 3, 1, 4};//vertical
    vector<int> Y = {4, 1, 2};//horizontal

    cout << minimumCostOfBreaking(X, Y) << endl;
    return 0;
}
