#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i <= n / 2 + 1) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        } else {
            for (int j = 1; j <= n - i + 1; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

