#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of lines (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 1;
    }

    int spaces = n / 2;
    int stars = 1;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Print stars with hollow spaces
        for (int j = 1; j <= stars; j++) {
            if (j == 1 || j == stars || i == 1 || i == n) {
                cout << "*"; // Print '*' for the first and last columns, and the first and last rows.
            } else {
                cout << " "; // Print space for all other positions within the diamond.
            }
        }

        cout << endl; // Move to the next line

        // Adjust spaces and stars for the next row
        if (i <= n / 2) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }

    return 0;
}
