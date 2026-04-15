#include<bits/stdc++.h>
using namespace std;

vector<int> reversed(vector<int> &arr){

     int n = arr.size();

     vector<int>ans;

     for(int i=n-1; i>=0 ; i--){
        ans.push_back(arr[i]);
     }
      return ans;
}

int  main(){
     
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n ; i++)
    cin >> arr[i];

    vector<int> rev = reversed(arr);
    for(int it : rev){

        cout << it << ' ';
      }
}

