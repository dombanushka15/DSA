/*
Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that 
|nums[i] - nums[j]| == k.

The value of |x| is defined as:

x if x >= 0.
-x if x < 0.
 
Example 1:
Input: nums = [1,2,2,1], k = 1
Output: 4
Explanation: The pairs with an absolute difference of 1 are:
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]
- [1,2,2,1]

*/

#include <bits/stdc++.h>
using namespace std;

int countKDifference(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    

    for(int num : nums) {
        freq[num]++;
    }

    int count = 0;

    for(auto it : freq) {
        int num = it.first;

        if(k > 0) {
            if(freq.count(num + k)) {
                count += it.second * freq[num + k];
            }
        } else { 
            int f = it.second;
            count += (f * (f - 1)) / 2;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {1,2,2,1};
    int k = 1;

    cout << countKDifference(nums, k);
}