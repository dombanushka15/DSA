#include<bits/stdc++.h>
using namespace std;

void fibonacciSeries(int n){
    int l = 0, r = 1;
    for(int i = 0; i <= n; i++){
        cout << l << " ";
        int temp = l;
        l = l + r; 
        r = temp; 
    }
}

int fibo(int num){
    if(num == 0 || num == 1)
     return num;

   return fibo(num-1) + fibo(num-2); 
}

int main(){
    int index;
    cin >> index;

    cout << fibo(index);

    cout<< endl;
    fibonacciSeries(index);

}