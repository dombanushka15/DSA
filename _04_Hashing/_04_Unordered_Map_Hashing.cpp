#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> colourCount;

    colourCount["GREY"] = 15;
    colourCount["BLUE"] = 18;

    // iterate and print all elements,

    for (auto it : colourCount) {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}