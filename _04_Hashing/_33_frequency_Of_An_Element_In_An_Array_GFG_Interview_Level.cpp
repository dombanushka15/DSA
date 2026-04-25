/*
Given an array, a[], and an element x, find a number of occurrences of x in a[].
*/
#include <bits/stdc++.h>
using namespace std;

int countOccurrences(vector<int>& arr, int x) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {0, 5, 5, 5, 4};
    int x = 5;

    cout << countOccurrences(arr, x);
    return 0;
}