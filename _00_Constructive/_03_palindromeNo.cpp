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

bool palindromeNo(int n){
     int real = n;
     int reverse = 0;
     int lastDigit ;
     
     int palindrome = numOfDigits(n);

     while(n>0){
     lastDigit = n%10;
     reverse = reverse * 10 + lastDigit;
     n = n/10;
     }

     if(reverse == real)
     return true ;

     else
     return false;
}

    int main(){
        int n;
        cin >> n;

        if(palindromeNo(n))
        cout << "Palindrome" << endl;

        else
        cout << "Not Palindrome" << endl;

        return 0;
    }