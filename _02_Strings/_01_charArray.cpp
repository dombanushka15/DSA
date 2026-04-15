#include <iostream>
using namespace std;

int main(){
    char name[6];
    cin >> name;

   for(char ch: name){
    cout << ch << " ";
   }
}

// S c h r o d \0
// 0 1 2 3 4 5 6