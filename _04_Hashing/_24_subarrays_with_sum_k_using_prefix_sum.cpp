#include <bits/stdc++.h>
using namespace std;

int countOfSubarrays(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSum;
    int sum = 0, count = 0;

    prefixSum[0] = 1;

    for (int x : arr) {
        sum += x;
        count += prefixSum[sum - k];
        prefixSum[sum]++;
    }
    return count;
}

int main() {
                    // 0 1 2 3 4
    vector<int> arr = {1,3,2,-4,5};
    int k = 2;

    cout << countOfSubarrays(arr, k);
}