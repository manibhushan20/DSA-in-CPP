
#include <iostream>
using namespace std;
 int main()
{
    int cp;
    cout << "Enter the cost price:";
    cin>>cp;
     int sp;
    cout << "Enter the selling price:";
    cin>>sp;
    if (sp>cp)  
    {
        cout<<"profit:"<<sp-cp;
    }
      if(cp>sp)
    {
        cout<<"loss:"<<cp-sp;
    }
    
    if(sp==cp)
    {
        cout<<"No profit no loss.";
    }
    
}