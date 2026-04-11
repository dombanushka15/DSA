#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& b ,int k){
    unordered_map<int,int > freq ;
     int count = 0;
     
      for(int x : b){
        count += freq[x - k];
        freq[x]++;
      }
         return count ;
}
int main(){

    vector<int> b = {1,2,3,4,5};
    int k = 2;

    cout << countPairs (b,k)<< endl;
    
    return 0;
  }