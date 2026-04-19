/*
  Find count of shortest/largest subarrays with sum k in given array

  Optimised Approach:- First Calculate size of Largest subarray and Smallest Subarray with sum
   of Elements as k using Maps. Now, just calculate the count of those subarrays which 
   have size as calculated above and sum of elements as k.
  
*/
#include<bits/stdc++.h>
using namespace std;

int countOfShortestLargestSubarrayWithSumk(vector<int>& arr,int k){

     unordered_map<int,int> firstIndex,lastIndex;

      // firstIndex = stores the first occurance of the prefix sum.
     // lastIndex  = stores the last occurance of the prefix sum.

    int n = arr.size();
    int prefixSum = 0 ; 
    int minimumLength = INT_MAX;
    int maximumLength = 0;
    int count = 0;

    // (prefix)sum = 0 .
    // minimumLength = shortest length of the subarray.
    // maximumLength = longest length of the subarray.


    firstIndex[0] = -1;
    // it stores first occurance only.
    // sum =0 occurs before the array starts...
    lastIndex[0] = -1;
    // because ,here the prefix sum occurs 0 , when the index is 0.

    for(int j=0;j<n;j++){
        prefixSum += arr[j];
        // put int x = just to store or find the required value.
        int x = prefixSum - k;
        // if we put firstIndex(count(x)), then when found x and the first occurance gives the maximumLength


        if(firstIndex.count(x)) {
            maximumLength = max(maximumLength, j - firstIndex[x]);
            // j-lastIndex(x)=subarray
        }

        if(lastIndex.count(x)) {
            minimumLength = min(minimumLength, j - lastIndex[x]);
            // j-lastIndex(x)=subarray
        }

        if(!firstIndex.count(prefixSum)) {
            firstIndex[prefixSum] = j;
        }
        //  to update the last coming occurance
        lastIndex[prefixSum] = j;
    }
     // its used when no valid subarray is found
    if(minimumLength == INT_MAX) return 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];

            int len = j - i + 1;
            if(sum == k && (len == minimumLength || len == maximumLength)) {
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1, 2, 3, -2, 5, 1, -1, 2};
    int k = 5;

    int result = countOfShortestLargestSubarrayWithSumk(arr, k);

    cout << result << endl;

    return 0;
}