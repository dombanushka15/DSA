/*
arr = 1 1 1 2 2 3 3 3 3

0 -> 0
1 -> 3
2 -> 2
3 -> 4

Output : 
3
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
  
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    vector<int> freq(maxi + 1);

    /*

    arr = 1 1 1 2 2 3 3 3 3

    0 - 0
    1 - 3
    2 - 2
    3 - 4

    */

    int maxFreq = freq[arr[0]];
    int majority = arr[0];

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;

        if(freq[arr[i]]> maxFreq){
            maxFreq = freq[arr[i]];
            majority = arr[i];
        }
    }
    cout << majority << endl;
}