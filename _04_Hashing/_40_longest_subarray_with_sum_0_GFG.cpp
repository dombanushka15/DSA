/*
Given an array arr[] consisting of both positive and negative integers, find the length of the longest 
subarray whose elements sum is zero.
A subarray is a contiguous part of an array, formed by selecting one or more consecutive elements while 
maintaining their original order.

Examples:
Input: arr[] = [15, -2, 2, -8, 1, 7, 10]
Output: 5
Explanation: The longest subarray with sum equals to 0 is [-2, 2, -8, 1, 7].
*/

#include <bits/stdc++.h>
using namespace std;

int max_Length(vector<int>& arr) {  
    int n = arr.size();
    int max_Len = 0; 


    for (int i = 0; i < n; i++) {
        int current_Sum = 0;

        
        for (int j = i; j < n; j++) {
            current_Sum += arr[j]; 

            
            if (current_Sum == 0)
                max_Len = max(max_Len, j - i + 1);
        }
    }
    return max_Len;
}
int main() {
    vector<int> arr = {15,-2,2,-8,1,7,10};
    cout << max_Length(arr) << endl;
    return 0;
}