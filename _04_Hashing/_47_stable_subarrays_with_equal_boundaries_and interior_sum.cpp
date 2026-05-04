/*
You are given an integer array capacity.

A subarray capacity[l..r] is considered stable if:

Its length is at least 3.
The first and last elements are each equal to the sum of all elements strictly between them 
(i.e., capacity[l] = capacity[r] = capacity[l + 1] + capacity[l + 2] + ... + capacity[r - 1]).
Return an integer denoting the number of stable subarrays.

Example 1:

Input: capacity = [9,3,3,3,9]

Output: 2

Explanation:

[9,3,3,3,9] is stable because the first and last elements are both 9, and the sum of the elements 
strictly between them is 3 + 3 + 3 = 9.
[3,3,3] is stable because the first and last elements are both 3, and the sum of the elements strictly
 between them is 3.

*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long ;
    long long stableSubarraysWithEqualBoundariesAndInterior(vector<int>& a) {

        ll n = a.size();
        ll remaining = 0;
        ll prefixSum = 0;

        unordered_map<ll, unordered_map<ll, ll>> stableSubarrays;

        for (int i = 0; i < n; i++) {

        
            if (stableSubarrays.count(a[i]) &&
                stableSubarrays[a[i]].count(prefixSum - a[i])) {

                remaining += stableSubarrays[a[i]][prefixSum - a[i]];
            }
           // logic main before adding current element to prefix:
           // Current prefix = sum before index i   

           // we were searching for prefixSum−a[i]
           // we have already found currentPrefix−oldPrefix=a[i]

           // Update prefix sum

            prefixSum += a[i];

            
            stableSubarrays[a[i]][prefixSum]++;
           
            // prefix for future subarrays.
            
            if (i > 0 && a[i] == 0 && a[i - 1] == 0) {
                remaining--;
            }
        }
         cout << stableSubarraysWithEqualBoundariesAndInterior ;
         
        return remaining;
    }
