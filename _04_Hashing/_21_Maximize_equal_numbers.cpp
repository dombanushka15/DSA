/*
Maximize equal numbers

You are given the following:
• An array a consisting of n elements
• Integer k

For each (1 <= i <= n), perform the following operation exactly one time:
• Replace a[i] by a[i] + x, where x € [-k, k] which denotes x
should lie in the range of -k and k, both inclusive.

Task:
Determine the maximum length of the subsequence of array a, 
such that all numbers in that subsequence are equal after applying the given operation.

Note:
• A subsequence of array a is an array that can be derived 
from array a by removing some elements from it. (maybe none or all of them)

Constraints:
1 <= t <= 1000
1 <= n <= 10^5
1 <= k <= 10^5
10^5 >= a[i] >= k + 1

// 1 2 3 4 5
*/


#include<bits/stdc++.h>
using namespace std;

int maxEqualNumbers(vector<int> arr, int k){

    int n = arr.size();
    int maxi = arr[0];
    for(int i = 0; i < n; i++){
        if(maxi < arr[i]){
            maxi = arr[i];
        }
    }

    vector<int> possibilities(maxi + 2 + k);

     for(int i = 0; i < n; i++){
        int l,r;
        l = arr[i] - k;
        r = arr[i] + k;

        possibilities[l] += 1;
        possibilities[r+1] -= 1;
    }

    int ans = 1;
    for(int i = 1; i < possibilities.size(); i++){
        possibilities[i] += possibilities[i-1];
        ans = max(possibilities[i], ans);
    }

    return ans;
} 

int main(){
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << maxEqualNumbers(arr, k);
}
