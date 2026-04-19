#include <bits/stdc++.h>
using namespace std;

int largestSubarraySum(vector<int>& arr, int k) {
    int n = arr.size();
    int maximumLength = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];

            if(sum == k) {
                maximumLength = max(maximumLength, j - i + 1);
            }
        }
    }
    return maximumLength;
}
 int main(){

     vector<int> arr = {1,2,-3,4,7,-5,6};

     int k=11;

    cout << largestSubarraySum(arr,k) << endl;
 }