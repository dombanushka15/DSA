#include <iostream>
using namespace std;

// Approach 1
string reverse(string &str){
    int n = str.length();
    string temp = str;
    for(int i = n -1, j = 0; i >= 0; i--, j++){
        temp[j] = str[i];
    }

    return temp;
}

bool Palindrome(string str){
     string rev = reverse(str);

     if(str == rev){
        return true;
     }

     return false;
}

// Approach 2 -> Two Pointer
//   s               e 
// amanaplanacanalpanama
bool Palindrome2(string str){

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

    if(Palindrome2(str))
        cout << "Palindrome";

    else
        cout << "Not Palindrome";    

}