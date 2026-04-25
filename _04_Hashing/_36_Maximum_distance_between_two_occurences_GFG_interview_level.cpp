/*
Given an array arr[], the task is to find the maximum distance between two occurrences of any element.
If no element occurs twice, return 0.

Input: arr = [1, 1, 2, 2, 2, 1]

Output: 5
Explanation: distance for 1 is: 5-0 = 5, distance for 2 is: 4-2 = 2, So max distance is 5.
*/
// C++ Program to find max distance between two occurrences
// in array by exploring all pairs

#include<bits/stdc++.h>
using namespace std;

int maximumDistance(vector<int>& arr) {
    int result = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
          
            if (arr[i] == arr[j]) {
               result = max(result, j - i);
            }
        }
    }
    return result;
}
int main() {
    vector<int> arr={1,2,3,4,5,6,5};

    cout << maximumDistance(arr) << endl;

    return 0;
}