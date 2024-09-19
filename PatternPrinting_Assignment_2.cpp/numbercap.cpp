#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print left number
        cout << i;

        // Print spaces between numbers
        for (int j = 1; j < 2 * i - 2; j++) {
            cout << "  ";
        }

        // Print right number (except for the first row)
        if (i > 1) {
            cout << i;
        }

        cout << endl; // Move to the next line
    }

    return 0;
}
