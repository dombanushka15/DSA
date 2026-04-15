#include<bits/stdc++.h>
using namespace std;
/*
Find largest/smallest subarray with sum k in Given Array
*/

int largestSubarraySum(vector<int>& arr, int k) {
       unordered_map<int, int> prefixsum;
       int sum = 0, maximumLength = 0;
 
    for (int j = 0; j < arr.size(); j++) {
        
        sum += arr[j];
        if (sum == k) {
            maximumLength = j + 1;
        }

        if (prefixsum.find(sum - k) != prefixsum.end()) {
            int i = prefixsum[sum - k];
            maximumLength = max(maximumLength, j - i);
        }
        
        if (prefixsum.find(sum) == prefixsum.end()) {
            prefixsum[sum] = j;
        }
    }
    return maximumLength;
}
  int main(){

     vector<int> arr = {1,2,-3,4,7,-5,6};

     int k=11;

    cout << largestSubarraySum(arr,k) << endl;
 }