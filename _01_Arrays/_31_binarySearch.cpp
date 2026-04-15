#include <bits/stdc++.h>
using namespace std;

// Log(n)
int binarySearch(vector<int> arr, int k){
    int n = arr.size();
    int start = 0, end = n - 1;

    while(start <= end){
        int mid = (start + end)/2;

        if(arr[mid] == k)
            return mid;

       else if(arr[mid] < k)
            start = mid + 1;
            
       else
            end = mid - 1;     
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int it: arr){
        cout << it << " ";
    }
    int k;
    cin >> k;
    cout << binarySearch(arr, k);
}

// n = 8
// k = 23

// -7 -37 87 23 9 0 21 23

//  0   1 2 3 4  5  6   7
// -37 -7 0 9 21 23 23 87
 