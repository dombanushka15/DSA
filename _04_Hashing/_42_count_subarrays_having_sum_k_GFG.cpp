/*
Given an array arr[] of postive and negative integers, the objective is to find the number of subarrays having a sum exactly equal to a given number k.

Examples: 

Input : arr[] = [10, 2, -2, -20, 10], k = -10
Output : 3
Explanation: Subarrays: arr[0...3], arr[1...4], arr[3...4] have sum equal to -10.

*/

#include <bits/stdc++.h>
using namespace std;

int count_Subarrays(vector<int>& arr, int k) {
    
    int size = arr.size();
    
    // for maintaing the count of
    // subarrays whose sum equal to k
    int count = 0;
    for(int i = 0; i < size; i++){
        
        int currSum = 0;
        
        
        for(int j = i; j < size; j++){
            currSum += arr[j];
            
        
            count += (currSum == k);
        }
    }
    return count;
}
int main() {
    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;
    cout << count_Subarrays(arr, k);
    return 0;
}