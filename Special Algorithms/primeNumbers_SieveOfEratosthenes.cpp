#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;


        vector<bool> prime(n + 1, 1);
        prime[0] = prime[1] = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                cout<<i<<" ";
                for (int j = 2 * i; j < n; j += i)
                    prime[j] = 0;
            }
        }


    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = 2; j <= n; j++)
    //     {
    //         if (i % j == 0 && i != j)
    //             break;
    //         if (j >= i)
    //         {
    //             cout << i <<" ";
    //             break;
    //         }
    //     }
    // }
}