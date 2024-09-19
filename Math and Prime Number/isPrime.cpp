#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            ;
            return false;
        }
    }
    return true;
}

void primeNumbers(int n)
{
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j += i)
                prime[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
            cout << i <<" ";
    }
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << isPrime(n)<<endl;
    primeNumbers(n);
}