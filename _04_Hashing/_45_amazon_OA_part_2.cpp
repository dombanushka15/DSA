#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    // n = number of elements.
    // k = divisor ,the important thing for modulo conditions.

    unordered_map<long long, long long> freq;
    // hashmap storing frequency of values

    long long prefix = 0, ans = 0;
    // prefix = keeps the sum running in an array.

    freq[0] = 1;
    // it means before the starting , we should have already have one prefix with value 0.(finding 1 index).

    for (long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;

        prefix += x;
        // adding element to the sum running in an array.

        long long value = ((prefix % k) - (i % k) + k) % k;
        // prefix % k = remainder.
        //i % k = index ca remainder.
        // just keep substracting.
        // we are adding +k to avoind the values those are negative.

        ans += freq[value];
        // all the occurences of valid subarrays keeps ending.

        freq[value]++;
        // it stores current value for future match.
    }

    cout << ans;
    // printing total subarrays found.
}
// new to learn concepts ....
// important topics....