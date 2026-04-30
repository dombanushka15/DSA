/*
Understanding :-> Given an array :-> count the number of good subarrays; 

Definition :-> [i……j] is good if sum[i……j]%k == length of that subarray 

Easier version :-> Good subarray -> sum[i….j] = j-i+1

Analysis :-> p[j] - p[i-1] = j-i+1 
:-> p[j] = sum(1….j); 

:-> p[j]-j ⇒ p[i-1]-i+1 then [i….j] 

-> we can calculate the count of good subarrays ending at index j; 

Real version :-> Modulo Formula :->

-> (a + b)%k = (a%k + b%k)%k 

-> (a - b)%k = (a%k - b%k + k)%k; 

-> We have to find the count of subarrays such that  sum[i……j]%k==(j-i+1)

-> (p[j] - p[i-1])%k = j-i+1 

-> (p[j]%k - p[i-1]%k + k)%k = j-i+1

-> Can be re-written as(‘i’ on one side; ‘j’ on other side;) :->
-> (p[j]%k - j + k)%k == (p[i-1]%k -i + 1 + k)%k
-> For safety purpose; we add %k everywhere; 

-> (p[j]%k -j%k + k)%k == (p[i-1]%k -i%k + 1%k + k)%k 
(If k==1 return 0 in code given below ok) 

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0, ans = 0;

    unordered_map<long long, int> countOfGoodSubarrays;
    countOfGoodSubarrays[0] = 1;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        sum += x;

        ans += countOfGoodSubarrays[sum - i];

        countOfGoodSubarrays[sum - i]++;
    }

    cout << ans;
}