#include <iostream>
using namespace std;

int findSum(int curr, int lastNumber , int sum)
{
    if (curr > lastNumber)
        return sum;
  
    if (curr % 2 != 0)
    {
        sum += curr;
    }
    findSum(curr + 1, lastNumber, sum);
}

int main()
{
    int a;
    cout << "Enter the lower bound:";
    cin >> a;
    int b;
    cout << "Enter the upper bound:";
    cin >> b;
    cout << findSum(a, b, 0) << endl;
}
