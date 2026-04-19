#include<bits/stdc++.h>
using namespace std;

int countOfShortestLargestSubarrayWithSumk(vector<int>& arr,int k){

    unordered_map<int,int> firstIndex, lastIndex;

    int n = arr.size();
    int prefixSum = 0 ; 
    int minimumLength = INT_MAX;
    int maximumLength = 0;

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

    return minCount + maxCount;
}

int main(){
    vector<int> arr = {1, 2, 3, -2, 5, 1, -1, 2};
    int k = 8;

    int result = countOfShortestLargestSubarrayWithSumk(arr, k);

    cout << result << endl;

    return 0;
}