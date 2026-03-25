#include<bits/stdc++.h>
using namespace std;

int factorialNo(int n){
 int factorial = 1;
 for(int i = 1; i <= n ;i++){
    factorial = factorial *i;
 }
 return factorial;
}
   
int main(){
    int n;
    cin >> n;

    cout << factorialNo(n) << endl;
}