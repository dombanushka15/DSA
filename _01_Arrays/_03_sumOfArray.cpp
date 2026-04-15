#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr){
       
     int n = arr.size();

     int total = 0;
     for(int i=0; i < n; i++){
         total += arr[i];
     }
      return total;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << sum(arr);
}