#include <iostream>
#include <vector>
#include <unordered_set>
#include <numeric>

using namespace std;

int solve(int n, vector<int>& arr) {
    if (n < 2) return 0;

    int totalSum = accumulate(arr.begin(), arr.end(), 0);

    int maxPartitions = 0;

    for (int i = 0; i < n; ++i) {
        int newSum = totalSum - arr[i];
        if (newSum % 2 != 0) continue;

        int target = newSum / 2;
        int prefixSum = 0;

        for (int j = 0; j < n; ++j) {
            if (j == i) continue;

            prefixSum += arr[j];

            if (prefixSum == target) {
                maxPartitions++;
                prefixSum = 0;
            }
        }
    }

    return maxPartitions;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> nums(N);
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }
        cout << solve(N, nums) << endl;
    }
    return 0;
}
