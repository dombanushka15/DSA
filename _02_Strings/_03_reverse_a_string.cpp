#include <iostream>
using namespace std;

string reverse(string &str){
    int n = str.length();
    string temp = str;
    for(int i = n -1, j = 0; i >= 0; i--, j++){
        str[j] = temp[i];
    }

    return str;
}

int main(){
    string str;
    cin >> str;

    string rev = reverse(str);

    cout << rev;
}