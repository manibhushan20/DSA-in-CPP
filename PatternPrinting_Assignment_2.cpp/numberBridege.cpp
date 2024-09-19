#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    
    // Print the first line of numbers
    for (int i = 1; i <= 2 * n - 1; i++) {
        cout << i;
    }
    cout << endl;
    
    int m = n - 1;
    int nsp = 1;
    
    // Loop to create the pattern
    for (int i = 1; i <= m; i++) {
        // Print the left side of the pattern
        for (int j = 1; j <= m + 1 - i; j++) {
            cout << j;
        }
        
        // Print the spaces
        for (int k = 1; k <= nsp; k++) {
            cout << " ";
        }
        
        // Print the right side of the pattern
        for (int l = m + 1 - i; l >= 1; l--) {
            cout << l;
        }
        
        // Move to the next line
        cout << endl;
        
        // Increase the number of spaces by 2 for the next row
        nsp += 2;
    }
    
    return 0;
}
