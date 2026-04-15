/*

arr = 5 4 8 7

subarrays: = {5}, {5,4}, {5,4,8}, {5,4,8,7}, {4}, {4,8}, {4,8,7}, {8}, {8,7}, {7}

max=         5      5       8       8          4    8       8     8     8       7

Output: 69
*/

#include <bits/stdc++.h>
using namespace std;

int maximumSum(vector<int>& arr){
    int n = arr.size();
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        int maxSum = arr[i];

        for (int j = i; j < n; j++) {
            maxSum= max(maxSum, arr[j]);
            totalSum += maxSum;
        }
    }
    return totalSum;
}

int main() {
    vector<int> arr = {5, 4, 8, 7};

    int result = maximumSum(arr);
    cout << result << endl;

    return 0;
}