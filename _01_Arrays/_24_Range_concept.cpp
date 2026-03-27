/*
 Given an array of all zeroes with q queries;
 For each query you need to add 1 from [l, r] in array

 print the after all queries are perfomed
*/

/*
0 0 0 0 0 

1 5
1 1 1 1 1

3 5
1 1 2 2 2

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int q;
    cin >> q;

    vector<int> arr(n+1);

    while(q--){
        int l,r;
        cin >> l >> r;

        arr[l] += 1;

        if(r<=n)
        arr[r+1]-=1;

    }

    for(int i=1;i<=n;i++){
        arr[i] += arr[i-1];
    }

    for(int i=1;i<=n;i++){
       cout << arr[i] << " ";
    }
}
