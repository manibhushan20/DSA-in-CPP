// #include <iostream>

// using namespace std;

// void displayMiddleRowAndColumn(int arr[][3], int rows, int cols) {
//     // Display middle row
//     int middleRow = rows / 2;
//     cout << "Middle Row: ";
//     for (int j = 0; j < cols; j++) {
//         cout << arr[middleRow][j] << " ";
//     }
//     cout << endl;

//     // Display middle column
//     int middleColumn = cols / 2;
//     cout << "Middle Column: ";
//     for (int i = 0; i < rows; i++) {
//         cout << arr[i][middleColumn] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     const int rows = 3;
//     const int cols = 3;
//     int arr[rows][cols] = {{1, 2, 3},
//                            {4, 5, 6},
//                            {7, 8, 9}};

//     displayMiddleRowAndColumn(arr, rows, cols);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void display(int arr[][100], int m, int n) {
//     int middleRow = m / 2;
//     cout << "The middle row elements are: ";
//     for (int j = 0; j < n; j++) {
//         cout << arr[middleRow][j] << " ";
//     }

//     int middleColumn = n / 2;
//     cout << endl << "The middle column elements are: ";
//     for (int i = 0; i < m; i++) {
//         cout << arr[i][middleColumn] << " ";
//     }
// }

// int main() {
//     int m, n;
//     cout << "Enter number of rows of matrix:";
//     cin >> m;
//     cout << "Enter the number of columns of matrix:";
//     cin >> n;

//     cout << "Enter the " << m * n << " elements of array:" << endl;
//     int arr[100][100]; // Assuming maximum size of the array is 100x100
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     display(arr, m, n);
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows/columns : ";
    cin >> n;
    
    int a[n][n];
    cout << "Enter the matrix elements : ";
    
    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "The elements of the middle row and middle column are as follows :" << endl;

    // Print middle row and middle column elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n / 2 || j == n / 2)
                cout << a[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}


