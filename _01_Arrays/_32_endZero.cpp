#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr){
    int a = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[a], arr[i]);
            a++;
        }
    }
}

int main(){
    int x;
    cin >> x;

    vector<int> arr(x);

    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }

    moveZeroes(arr);

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}