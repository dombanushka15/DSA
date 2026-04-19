#include<bits/stdc++.h>
using namespace std;

int countOfSubarrays(vector<int>& arr , int k){
    int n = arr.size();
    int count = 0;

    for(int j = 0 ; j < n ; ++j){
        int sum = 0;  
        for(int i = j; i >= 0 ; --i){
            sum += arr[i];

            if(sum == k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,3,2,-4,5};
    int k = 2;

    cout << countOfSubarrays(arr, k) << endl;

    return 0;
}
//total subarray at k = 2
// [2]
// Sum = 2 
// [1, 3, 2, -4]
// Sum = 1 + 3 + 2 - 4 = 2 