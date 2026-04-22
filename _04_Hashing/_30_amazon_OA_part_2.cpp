/*
Kadane’s Algorithm:- Same as above just remove the p1[]

T = 0 
for(i=1;i<=n;i++){
      current=max(prv+b[i],b[i],0)
      prv=current  
      T=max(T,current)
} 
print(T)  = max sum subarray for the whole array .
*/

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(const vector<int>& arr) {

    // const = it ensures that the vector is not modified.

    int maxSum = arr[0];   
    //maxSum → stores final answer.

    int currentSum = arr[0]; 
    //currentSum → helps in tracking  sum of current subarray.

    for (int i = 1; i < arr.size(); i++) {

        currentSum = max(arr[i], currentSum + arr[i]);

        //Start a new subarray from arr[i]
        // by extending the previous subarray,currentSum + arr[i].

        maxSum = max(maxSum, currentSum);
        // here update overall maximum sum if so the current is bigger.
    }
    return maxSum;
}
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout  << maxSubarraySum(arr) << endl;

    return 0;
}
