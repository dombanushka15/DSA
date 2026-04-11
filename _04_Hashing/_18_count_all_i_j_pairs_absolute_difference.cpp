#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& b ,int k){
     int count = 0;
     int n = b.size();

     for(int i = 0;i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(abs(b[i]-b[j])==k)
            count++;
        }
     }
         return count ;
}
  int main(){

    vector<int> b = {1,2,3,4,5};
    int k = 2;

    cout << countPairs (b,k)<< endl;
    
    return 0;
  }