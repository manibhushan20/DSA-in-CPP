#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j<<" ";
        }
        cout << endl; // Add a newline after each row
    }

    return 0; // Add a return statement to indicate successful execution
}
