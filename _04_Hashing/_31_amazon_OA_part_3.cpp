/*
Given an array find two subarrays of maximum sum which are not intersecting 
(Both the subarrays are allowed to be 0) 
Iterate over all possible partitions. 

When stick is at end of first position answer is g1 

When stick is at end of second position answer is g2
.
.
……………………………………………………………
Max(g1,........................)

 G[i] = left best subarray + right best subarray 

s1[i] = best sum subarray starting at index “i” (calculate from backwards.)

Left best subarray = max(p1[1],................p1[i]) 

Right best subarray = max(s1[n],.............s1[i+1]) 

*/
#include <bits/stdc++.h>
using namespace std;

int maxTwoSubarrays(vector<int>& arr) {

    int n = arr.size();

    vector<int> left(n), right(n);
    // left = subarray sum in range [0 to i].
    // right = subarray sum in range [i to n-1].

    int current = arr[0];
    // current = the current running subarray sum.

    left[0] = max(0, arr[0]);
    //take the element arr[0]
    //or take empty subarray 0.

    for (int i = 1; i < n; i++) {
        current = max(arr[i], current + arr[i]);
        //Starting the  new subarray at i

        left[i] = max(left[i - 1], current);
    }

    current = arr[n - 1];
    // current for the reverse ,....

    right[n - 1] = max(0, arr[n - 1]);

    for (int i = n - 2; i >= 0; i--) {
        current = max(arr[i], current + arr[i]);
        // backwards ( the same logic as used before).

        right[i] = max(right[i + 1], current);
    }


    int ans = 0;
    // to allow the empty subarrays.

    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, left[i] + right[i + 1]);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    {
      for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    }
    cout << maxTwoSubarrays(arr);
}