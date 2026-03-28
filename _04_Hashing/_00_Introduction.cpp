#include <bits/stdc++.h>
using namespace std;

int occurenceCount(int number, vector<int> &arr) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == number) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int number;
    cin >> number;

    cout << occurenceCount(number, arr);

    return 0;
}