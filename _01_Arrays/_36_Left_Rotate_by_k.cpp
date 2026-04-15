#include <bits/stdc++.h>
using namespace std;
    //Input:
    // 7  3 1 -3 2
    // Output:
    // 1 -3 2 7  3

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    k %= n;
    // 7 3 1 -3 2
    
    reverse(arr.begin(), arr.begin() + k);
    // 3 7 1 -3 2

    reverse(arr.begin() + k, arr.end());
    // 3 7 2 -3 1

    reverse(arr.begin(), arr.end());
    // 1 -3 2 7 3
    
     for(int it : arr)
     {
        cout << it;
     }
}