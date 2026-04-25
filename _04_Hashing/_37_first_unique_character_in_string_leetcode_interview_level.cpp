/*
Given a string s, find the first non-repeating character in it and return its index. 
If it does not exist, 
return -1.
*/
#include <bits/stdc++.h>
using namespace std;

int firstUniqueCharacter(string s) {
    vector<int> freq(26, 0);

    for(char c : s) {
        freq[c - 'a']++;
    }

    
    for(int i = 0; i < s.length(); i++) {
        if(freq[s[i] - 'a'] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    string s;
    cin >> s;
    cout << firstUniqueCharacter(s);
}