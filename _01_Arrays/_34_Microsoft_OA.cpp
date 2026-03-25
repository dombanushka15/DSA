#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
  int main(){
    vector<int> arr ={51,71,17,42};

    int n = arr.size();
    int maxSum = -1;
     
    for(int i=0;i<n;i++){

        for(int j = i-1; j>= 0; j--){
            if( sumOfDigits(arr[i]) == sumOfDigits(arr[j]) ){

                int totalSum = arr[i]+arr[j];

                if ( totalSum >  maxSum ){
                    maxSum = totalSum;
                }
        }
    }
}
    cout << "Maximum sum " << maxSum << endl;
    return 0;
}