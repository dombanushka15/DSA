#include <bits/stdc++.h>
using namespace std;

/*
Input:
arr = 1 3 2 4   k = 4

output:
2
*/
 int findSecurityLevel(vector<int> pid, int k){
      int n = pid.size();
      int count =0;

      for(int i=0 ; i< n; i++){
        int sum =0 ;
        for(int j = i ; j < n ; j++){
            sum += pid[j];
            int length = j-i+1;

            if(sum%k==length){
                count++;
            }
        }
    }
    return count;
 }

int main(){
        int n;
        cin >> n ;

        int k;
        cin >> k;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout<< findSecurityLevel(arr,k);
    }
