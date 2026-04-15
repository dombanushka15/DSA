#include <bits/stdc++.h>
using namespace std;
vector<int> findUnion(vector<int> a, vector<int> b) {
    set<int> s(a.begin(), a.end());
    s.insert(b.begin(), b.end());
    return vector<int>(s.begin(), s.end());
}

int main() {
vector<int> n = {-25, 98, 78, 65, -23};
vector<int> m = {25, 65, 76, 1, -23};
vector<int> ans = findUnion(n, m);

    for (int x : ans)
        cout << x << " ";
}   