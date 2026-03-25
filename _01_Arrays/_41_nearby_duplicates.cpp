#include<bits/stdc++.h>
using namespace std;

/*
Input:
n = 6, k = 2
9            k
        i   j
arr = 1 1 3 1 2 3

OUtput:
true
*/

bool nearbyDuplicate(vector<int>& arr, int k) {
     int n=arr.size();

     for(int i=0;i<n;i++){
        for(int j=i+1; j<n && j<=k+i;j++)
        if(arr[i]==arr[j])
        return true;
     }
      return false;
}
int main() {
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout <<(nearbyDuplicate(arr,k)) << endl;
}   