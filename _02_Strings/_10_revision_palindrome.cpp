#include<iostream>
using namespace std;
bool Palindrome(string str){
     int n = str.length();
    int start = 0, end = n - 1;
    
    while(start < end){
        if(str[start] != str[end])
            return false;

        start++;
        end--;    
    }

    return true;

}

int main(){
    string str;
    cin >> str;

    if(Palindrome(str))
        cout << "Palindrome";

    else
        cout << "Not Palindrome";    

}