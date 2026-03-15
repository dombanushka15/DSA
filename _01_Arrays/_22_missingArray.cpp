#include <bits/stdc++.h>
using namespace std;

int missingNo(vector<int> &arr){
    int sum = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return abs(n*(n+1)/2 - sum);
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    cout << missingNo(arr);

    return 0;
}