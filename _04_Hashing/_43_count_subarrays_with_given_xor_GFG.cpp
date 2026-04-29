/*
Given an array of integers arr[] and a number k, the task is to count the number of subarrays having 
XOR of their elements as k.

Examples: 

Input: arr[] = [4, 2, 2, 6, 4], k = 6
Output: 4
Explanation: The subarrays having XOR of their elements as 6 are [4, 2], [4, 2, 2, 6, 4], [2, 2, 6], 
and [6].

*/
#include <bits/stdc++.h>
using namespace std;

int subarray_Of_Xor(vector<int>& arr, int k) {
    int remaining= 0; 

    for (int i = 0; i < arr.size(); i++) {
        int  current_XOR = 0; 

        
        for (int j = i; j < arr.size(); j++) {
          
            // current_XOR if subarray arr[i...j]
            current_XOR = current_XOR ^ arr[j];

            // If current_XOR is equal to given value,
            // increase ans by 1.
            if (current_XOR == k)
                remaining++;
        }
    }
    return remaining;
}
int main() {
    vector<int> arr = { 4, 2, 2, 6, 4 };
    int k = 6;

    cout << subarray_Of_Xor(arr, k);
    return 0;
}