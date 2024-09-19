#include <iostream>
using namespace std;
// a is source , b is helper, c is destination

void hanoi(int n, char a, char b, char c)
{   if(n==0) return;
    hanoi(n - 1, a, c, b); // c helps n-1 dishes to reach b
    cout << a << "->" << c << endl;                // base dishe reches destination
    hanoi(n - 1, b, a, c); // now a helps n-1 dishes from b to reach c;
}

int main()
{
    int n;
    cout << "Enter the number of dishes:";
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
}