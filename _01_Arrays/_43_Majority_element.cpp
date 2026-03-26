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

    for(int i=0 ; i<n ; i++){
      cin >> arr[i];
    }

    int max = arr[0];

    for(int i=0;i<n;i++){
      if(arr[i]>max)
      max=arr[i];
    }

    vector<int> freq(max+1);

    int maxfreq = freq[arr[0]];
    int majority =arr[0];

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
      if(freq[arr[i]]>maxfreq)
       majority = arr[i];
    }
     cout << majority << endl;
}

 /*

    arr = 1 1 1 2 2 3 3 3 3

    freq:
    i   e
    0 - 0
    1 - 3
    2 - 2
    3 - 4

    */