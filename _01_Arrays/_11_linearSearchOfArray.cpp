#include<bits/stdc++.h>
using namespace std;

int linearSearch (vector<int> &arr, int key){
int n= arr.size();

   for( int i=0 ;i < n ;i++){
        if(arr[i]==key)
            return i;
   }
      return -1;
}

int main(){
    vector<int> arr = {-5, 9, 3, 1, 5, 3};
    //                  0  1  2  3  4  5
    int k = 3;

    cout << linearSearch(arr, k);
}