#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
}