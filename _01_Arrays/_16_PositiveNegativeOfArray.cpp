#include<bits/stdc++.h>
using namespace std;

void countPositiveNegative(vector<int> &arr){
    int n = arr.size();
    int Positive = 0, Negative = 0;
    for(int i =0 ; i<n ; i++){
        if(arr[i]>=1)
        Positive++;

        else
        Negative++;
    }
     cout << "Positive  Count " << Positive << ' ' << "Negative Count " << Negative << endl;
}
 int main(){
    int n ;
     cin >> n;

     vector<int> arr(n);

     for(int i=0; i < n; i++)
      cin >> arr[i];

     countPositiveNegative(arr);

 }