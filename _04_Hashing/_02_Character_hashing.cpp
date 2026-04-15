#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    
    int hashh[26] = {0};

     // precompute

    for(char ch : s){
        hashh[ch - 'a']++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;

        cout << hashh[c - 'a'] << endl;
    }
}