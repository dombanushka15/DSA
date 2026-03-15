#include <iostream>
using namespace std;

int getLength(string str){

    int i = 0;
    // d u m b \0
    // 0 1 2 3 4
    while(str[i] != '\0'){
        i++;
    }

    return i;
}

int main(){

    string str;
    cin >> str;  

    cout << getLength(str);
}