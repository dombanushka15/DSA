 /*
 Input:
 n = 5;
 arr = 5 2 -7 -9 0 

 Output:
 -7
 */

 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int n;
     cin >> n;
      
     int arr[n];

     for(int i=0;i<n;i++)
     cin >> arr[i];

     int mini =arr[0];

     for(int i=1 ;i<n;i++){
        //  -9       -9
        if(arr[i] < mini)
            mini = arr[i];
     }

     cout << mini << " ";
 }