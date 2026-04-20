#include<bits/stdc++.h>
using namespace std;

int countOfShortestLargestSubarrayWithSumk(vector<int>& arr,int k){

    unordered_map<int,int> firstIndex, lastIndex;

    // firstIndex = stores the first occurance of the prefix sum.
     // lastIndex  = stores the last occurance of the prefix sum.

    int n = arr.size();
    int prefixSum = 0 ; 
    int minimumLength = INT_MAX;
    int maximumLength = 0;

    // prefixSum → running sum of array.
    // minimumLength → smallest subarray length with sum k.
    // maximumLength → largest subarray length with sum k.
    // minCount → count of smallest subarrays.
    // maxCount → count of largest subarrays.

    int minCount = 0, maxCount = 0;

    firstIndex[0] = -1;
    lastIndex[0] = -1;

    for(int j = 0; j < n; j++){
        prefixSum += arr[j];
        int x = prefixSum - k;

        if(firstIndex.count(x)) {
            int len = j - firstIndex[x];

            if(len > maximumLength) {
                maximumLength = len;
                maxCount = 1;

                // New maximum = reset count.
                // Same maximum = increment count.
            }
            else if(len == maximumLength) {
                maxCount++;
            }
        }

        if(lastIndex.count(x)) {
            int len = j - lastIndex[x];

            if(len < minimumLength) {
                minimumLength = len;
                minCount = 1;
            }
            else if(len == minimumLength) {
                minCount++;
            }
        }

        if(!firstIndex.count(prefixSum)) {
            firstIndex[prefixSum] = j;
        }

        lastIndex[prefixSum] = j;
    }

    if(minimumLength == INT_MAX) return 0;

    if(minimumLength == maximumLength) return minCount;
     // if the minimum is equal to the maximum the we must avoid dounle counting.

    return minCount + maxCount;
    // then return the minimumcount + maximumcount.
}

int main(){
    vector<int> arr = {1, 2, 3, -2, 5, 1, -1, 2};
    int k = 8;

    int result = countOfShortestLargestSubarrayWithSumk(arr, k);

    cout << result << endl;

    return 0;
}