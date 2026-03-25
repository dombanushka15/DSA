/*
Input:
      0 1 2 3  4 -> indices
arr = 2 4 7 5 -3

output:
Yes


arr[j] > arr[k] > arr[i];

when:
i < j < k

*/
#include<bits/stdc++.h>
using namespace std;

bool validTriplets(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){

      for(int j = i + 1; j < n; j++){
            
            for(int k = j + 1; k < n; k++){

                  if(arr[j] > arr[k] && arr[k] > arr[i]){
                        return true;
                  }

            }
      }
    }

    return false;

}
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(validTriplets(arr))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
