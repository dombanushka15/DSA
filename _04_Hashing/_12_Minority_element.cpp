#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    vector<int> freq(maxi + 1, 0);

    // count number of frequencies
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }


    int minFreq = INT_MAX;
    int minority = -1;

    for(int i = 0; i <= maxi; i++) {
        if(freq[i] > 0 && freq[i] < minFreq) {
            minFreq = freq[i];
            minority = i;
        }
    }

    cout << minority << endl;

    return 0;
}