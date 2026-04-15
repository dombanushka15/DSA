#include<bits/stdc++.h>
using namespace std;

void  evenAndOddCount(vector<int> &arr){

   int even=0, odd=0;

   for(int i=0;i<arr.size();i++){
         if(arr[i]%2==0)
             even++;

         else
          odd++;
   }
     cout << "Even Count: " <<  even << ' ' << "Odd Count: " << odd << endl;
}

int main(){

    int n;
    cin >> n;
  
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
     evenAndOddCount(arr);
}