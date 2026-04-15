/*
arr = 1 1 1 2 2 3 3 3 3

Output : 
2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin >> n;

     vector<int> arr(n);

     for(int i=0;i<n;i++){
        cin >> arr[i];
     }
      int max = arr[0];
      
      for(int i=0;i<n;i++){
      if(arr[i]>max)
      max=arr[i];
    }
      vector<int> freq(max+1,0);
        for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    int minFreq = max;
    int ans = -1;


    for(int i = 0; i <= max; i++){
        if(freq[i] > 0 && freq[i] < minFreq){
            minFreq = freq[i];
            ans = i;
        }
    }

    cout << ans << endl;
}

