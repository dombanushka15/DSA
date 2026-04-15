#include<iostream>
using namespace std;

int getline(string str){
    int i=0;
    while(str[i]!='\0'){
    i++;}
    return i;
}
int main(){
    string str;
    cin >> str;

    cout << getline(str);
}