/*
 1 2 3 4 5 6
     l   r

  output = 12.    
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin >> n;

     vector<int> arr(n);

     for(int i = 0; i < n; i++){
        cin >> arr[i];
     }

     int l,r;
     cin >> l >> r;

    //  int sum=0;

    //  for(int i = l-1; i < r; i++){
    //     sum += arr[i];
    //  }

    //  cout << sum;

   vector<int> prefixSum(n+1);
    prefixSum[0] = arr[0];

    for(int i = 1; i <= n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i-1];
    } 

    int sum = prefixSum[r] - prefixSum[l-1];
    cout << sum;
}