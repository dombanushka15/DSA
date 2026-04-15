#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int n, x; 
    cin >> n;
    vector<int> e, o;
    while (n--)
     {
        cin >> x;
        (x % 2 == 0 ? e : o).push_back(x);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    for (int i : e) cout << i << " ";
    cout << "\n";
    for (int i : o) cout << i << " ";
}
