#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;


    unordered_map<char, int> freq;

    for (char ch : s) {
        freq[ch]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
      
        cout << freq[c] << endl;
    }

    return 0;
}