// Given two sorted arrays A and B, generate all possible arrays such that the first element is taken
// from A then from B then from A, and so on in increasing order till the arrays are exhausted. The
// generated arrays should end with an element from B.
// A = {10, 15, 25}
// B = {1, 5, 20, 30}
// Output: {10 20}, {10 20 25 30}, {10 30}, {15 20}, {15 20 25 30}, {15 30},
// {25 30}

#include<iostream>
#include<vector>
using namespace std;

void generateArrays(int A[], int sizeA, int B[], int sizeB, vector<int>& current, bool fromA) {
    if (fromA && !current.empty()) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << endl;
    }

    if (fromA) {
        for (int i = 0; i < sizeA; i++) {
            if (current.empty() || A[i] > current.back()) {
                current.push_back(A[i]);
                generateArrays(A, sizeA, B, sizeB, current, !fromA);
                current.pop_back();
            }
        }
    } else {
        for (int i = 0; i < sizeB; i++) {
            if (B[i] > current.back()) {
                current.push_back(B[i]);
                generateArrays(A, sizeA, B, sizeB, current, !fromA);
                current.pop_back();
            }
        }
    }
}

int main() {
    int A[] = {10, 15, 25};
    int B[] = {1, 5, 20, 30};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    vector<int> current;

    generateArrays(A, sizeA, B, sizeB, current, true);

    return 0;
}
