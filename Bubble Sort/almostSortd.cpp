#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,3,2,4,5,7,6};
    int n = 7;  

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bool flag = true;
    for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            flag = false;
        }
    }

    if (flag == true) {
        cout << "Given array is almost sorted." << endl;
    } else {
        cout << "Given array is not almost sorted." << endl;
    }

    return 0;
}
