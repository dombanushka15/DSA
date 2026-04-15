#include <iostream>
using namespace std;

int sumOfDigits(string str){

    int sum = 0;
    for(char ch: str){
        int digit = ch - '0';
        sum += digit;
    }

    return sum;
}

int main(){

    string str;
    cin >> str;

    int sum = sumOfDigits(str);
    cout << sum;
}