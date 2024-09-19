#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Create an unordered_map to store the frequency of each element
  unordered_map<int, int> mp;

  // Iterate over the array and update the frequency of each element
  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }

  // Print the frequency of each element
  for (auto it : mp) {
    cout << it.first << " " << it.second << endl;
  }

  return 0;
}