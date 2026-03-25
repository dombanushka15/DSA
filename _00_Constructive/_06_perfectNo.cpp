#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;

    if (isPerfect(n))
        cout << n << " is a Perfect Number";
    else
        cout << n << " is not a Perfect Number";

    return 0;
}
