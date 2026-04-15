#include<bits/stdc++.h>
using namespace std;

int average(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    for(int i=0; i < n ; i++){
         sum += arr[i];
    }
     return sum/n;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    cout << "average" << average(arr);
}