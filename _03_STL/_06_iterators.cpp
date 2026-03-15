#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, string>> v;
    v.push_back({90, "Anushka"});
    v.push_back({95, "payal"});
    v.push_back({90, "sanika"});
    sort(v.begin(), v.end());
    vector<pair<int, string>>::iterator it;
    cout << "Sorted list:\n";
    for (it = v.begin(); it != v.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
