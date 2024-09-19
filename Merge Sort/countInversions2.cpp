#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    Node* inorder(Node* root, vector<int>& v) {
        if (root == nullptr) return nullptr;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
        return root;
    }

int merge(int lo, int mid, int hi, vector<int>& v) {
    int cnt = 0;
    int left = lo;
    int right = mid + 1;
    vector<int> temp;
    
    while (left <= mid && right <= hi) {
        if (v[left] <= v[right]) {
            temp.push_back(v[left]);
            left++;
        } else {
            temp.push_back(v[right]);
            cnt += mid - left + 1;
            right++;
        }
    }
    
    while (left <= mid) {
        temp.push_back(v[left]);
        left++;
    }
    
    while (right <= hi) {
        temp.push_back(v[right]);
        right++;
    }
    
    for (int i = lo, j = 0; i <= hi; i++, j++) {
        v[i] = temp[j];
    }
    
    return cnt;
}


    int mergeSort(int lo, int hi, vector<int>& v) {
        int cnt = 0;
        if (lo >= hi) return cnt;
        int mid = (hi + lo) / 2;
        cnt += mergeSort(lo, mid, v);
        cnt += mergeSort(mid + 1, hi, v);
        cnt += merge(lo, mid, hi, v);
        return cnt;
    }

    int pairsViolatingBST(int n, Node* root) {
        vector<int> v;
        inorder(root, v);
        return mergeSort(0, n - 1, v);
    }
};


