#include<bits/stdc++.h>
using namespace std;

int numOfDigits(int num){
    int count = 0;

    while(num > 0){
        num = num / 10;
        count++;
    }

    return count;
}

int power(int digit, int n){
    int result = 1;

    for(int i = 0; i < n; i++){
        result = result * digit;
    }

    return result;
}

bool armstrongNO(int n){
    int real = n;
    int sum = 0;
    int digit = 0;

    int numOfDigit = numOfDigits(n);

    while(n > 0){
        digit = n % 10;
        sum = sum + power(digit, numOfDigit);
        n = n / 10;
    }

    if(sum == real)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin >> n;

    if(armstrongNO(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}