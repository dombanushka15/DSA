#include<bits/stdc++.h>
using namespace std;

int multiplicationOfElements(vector<int> &arr){
    int multiplication = 1;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        multiplication = multiplication * arr[i];
    }

    return multiplication;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = multiplicationOfElements(arr);

    cout << result;

    return 0;
}