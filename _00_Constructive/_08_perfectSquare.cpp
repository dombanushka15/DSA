#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n){
    for(int i = 2; i*i < n ; i++){
        if(i*i==n)
        return true;
    }
        return false;
    }

     
int main(){
        int num;
        cin >> num;

        if(isPerfectSquare(num))
        cout << "Perfect Square" << endl;

        else
        cout << "Not Perefct Square" << endl;
      }